#include "led_handler.h"
#include <zephyr.h>
#include <logging/log.h>
#include <device.h>
#include <devicetree.h>
#include <drivers/gpio.h>

LOG_MODULE_REGISTER(led_handler, CONFIG_LOG_DEFAULT_LEVEL);

struct gpio_pin {
	const char * const port;
	const uint8_t number;
	const uint8_t flags;
};

static const struct gpio_pin led_pins_cst[] = {
#if DT_NODE_HAS_STATUS(DT_ALIAS(led4), okay)
   {DT_GPIO_LABEL(DT_ALIAS(led4), gpios),
    DT_GPIO_PIN(DT_ALIAS(led4), gpios),
    DT_GPIO_FLAGS(DT_ALIAS(led4), gpios)},
#endif
};

static const struct device *led_devs_cst[ARRAY_SIZE(led_pins_cst)];
// static const struct device *dev;

int gpio_leds_init(void)
{
	int err;
	for (size_t i = 0; i < ARRAY_SIZE(led_pins_cst); i++) {

		led_devs_cst[i] = device_get_binding(led_pins_cst[i].port);
		if (!led_devs_cst[i]) {
			LOG_ERR("Cannot bind gpio device");
			return -ENODEV;
		}

		err = gpio_pin_configure(led_devs_cst[i], led_pins_cst[i].number,
					 GPIO_OUTPUT_ACTIVE | led_pins_cst[i].flags);
		if (err) {
			LOG_ERR("Cannot configure LED gpio");
			return err;
		}
		LOG_INF("%s, %i, %i", led_pins_cst[i].port, led_pins_cst[i].number, led_pins_cst[i].flags);
	}
        return 0;
}

int cst_gpio_set_led(uint8_t led_idx, uint32_t val)
{
	int err;

	if (led_idx >= ARRAY_SIZE(led_pins_cst)) {
		LOG_ERR("LED index out of the range");
		return -EINVAL;
	}
	err = gpio_pin_set(led_devs_cst[led_idx], led_pins_cst[led_idx].number, IS_ENABLED(CONFIG_DK_LIBRARY_INVERT_LEDS) ? !val : val);
       k_msleep(1000);
	if (err) {
		LOG_ERR("Cannot write LED gpio");
	} else {
               LOG_INF("GPIO %i is set to %i", led_idx, val);
       }
	return err;
}

int cst_gpio_set_led_on(uint8_t led_idx)
{
	return cst_gpio_set_led(led_idx, 1);
}

int cst_gpio_set_led_off(uint8_t led_idx)
{
	return cst_gpio_set_led(led_idx, 0);
}
