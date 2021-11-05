#include "led_handler.h"
#include <zephyr.h>
#include <logging/log.h>
#include <device.h>
#include <devicetree.h>
#include <drivers/gpio.h>
#include <drivers/pwm.h>

LOG_MODULE_REGISTER(led_handler, CONFIG_LOG_DEFAULT_LEVEL);

#define RED_NODE DT_ALIAS(red_pwm_led_custom)
#define GREEN_NODE DT_ALIAS(green_pwm_led_custom)
#define BLUE_NODE DT_ALIAS(blue_pwm_led_custom)

#if DT_NODE_HAS_STATUS(RED_NODE, okay)
#define RED_CTLR_NODE	DT_PWMS_CTLR(RED_NODE)
#define RED_CHANNEL	DT_PWMS_CHANNEL(RED_NODE)
#define RED_FLAGS	DT_PWMS_FLAGS(RED_NODE)
#endif

#if DT_NODE_HAS_STATUS(GREEN_NODE, okay)
#define GREEN_CTLR_NODE	DT_PWMS_CTLR(GREEN_NODE)
#define GREEN_CHANNEL	DT_PWMS_CHANNEL(GREEN_NODE)
#define GREEN_FLAGS	DT_PWMS_FLAGS(GREEN_NODE)
#endif

#if DT_NODE_HAS_STATUS(BLUE_NODE, okay)
#define BLUE_CTLR_NODE	DT_PWMS_CTLR(BLUE_NODE)
#define BLUE_CHANNEL	DT_PWMS_CHANNEL(BLUE_NODE)
#define BLUE_FLAGS	DT_PWMS_FLAGS(BLUE_NODE)
#endif

#define PERIOD_USEC	(1000000 / 50U)
#define STEPSIZE_USEC	2000

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
#if DT_NODE_HAS_STATUS(DT_ALIAS(led5), okay)
	{DT_GPIO_LABEL(DT_ALIAS(led5), gpios),
    DT_GPIO_PIN(DT_ALIAS(led5), gpios),
    DT_GPIO_FLAGS(DT_ALIAS(led5), gpios)},
#endif
};

// static const struct device *led_devs_cst[ARRAY_SIZE(led_pins_cst)];
// static const struct device *rgb_devs_cst[3];

int pwm_set(const struct device *pwm_dev, uint32_t pwm_pin, uint32_t pulse_width, uint8_t flags) {
	return pwm_pin_set_usec(pwm_dev, pwm_pin, PERIOD_USEC, pulse_width, flags);
}

int gpio_leds_init(void) {
	// int err;
	// for (size_t i = 0; i < ARRAY_SIZE(led_pins_cst); i++) {
	//
	// 	led_devs_cst[i] = device_get_binding(led_pins_cst[i].port);
	// 	if (!led_devs_cst[i]) {
	// 		LOG_ERR("Cannot bind gpio device");
	// 		return -ENODEV;
	// 	}
	//
	// 	err = gpio_pin_configure(led_devs_cst[i], led_pins_cst[i].number,
	// 				 GPIO_OUTPUT_ACTIVE | led_pins_cst[i].flags);
	// 	if (err) {
	// 		LOG_ERR("Cannot configure LED gpio");
	// 		return err;
	// 	}
	// 	LOG_INF("%s, %i, %i", led_pins_cst[i].port, led_pins_cst[i].number, led_pins_cst[i].flags);
	// }
        return 0;
}

// int cst_rgb_leds_init(void) {
// 	int err = 0;
//         // DEVICE_DT_GET(RED_CTLR_NODE)
// 	rgb_devs_cst[RED] = DEVICE_DT_GET(RED_CTLR_NODE);
// 	//rgb_devs_cst[GREEN] = DEVICE_DT_GET(GREEN_CTLR_NODE);
// 	//rgb_devs_cst[BLUE] = DEVICE_DT_GET(BLUE_CTLR_NODE);
//
// 	//if (!device_is_ready(rgb_devs_cst[RED])) {
// 	//	LOG_ERR("Error: red PWM device %s is not ready\n", rgb_devs_cst[RED]->name);
// 	//}
// 	//if (!device_is_ready(rgb_devs_cst[GREEN])) {
// 	//	LOG_ERR("Error: green PWM device %s is not ready\n", rgb_devs_cst[GREEN]->name);
// 	//}
// 	//if (!device_is_ready(rgb_devs_cst[BLUE])) {
// 	//	LOG_ERR("Error: blue PWM device %s is not ready\n", rgb_devs_cst[BLUE]->name);
// 	//}
//   return err;
// }



int rgb_leds_set_red(uint32_t pulse_red) {
	int err = 0;
	const struct device *pwm;
	// pwm = DEVICE_DT_GET(RED_CTLR_NODE);
	// if (!device_is_ready(pwm)) {
	// 	LOG_ERR("Error: PWM device %s is not ready\n", pwm->name);
	// 	return 0;
	// }
	//pwm_set(pwm, RED_CHANNEL, pulse_red, RED_FLAGS);
	//if (err != 0) {
	//	LOG_ERR("Error %d: red write failed\n", err);
	//}
	return 0;
}

int rgb_leds_set_green(uint32_t pulse_green) {
	int err = 0;
	//err = pwm_set(rgb_devs_cst[GREEN], GREEN_CHANNEL, pulse_green, GREEN_FLAGS);
	if (err != 0) {
		LOG_ERR("Error %d: green write failed\n", err);
	}
	return err;
}

int rgb_leds_set_blue(uint32_t pulse_blue) {
	int err = 0;
	// err = pwm_set(rgb_devs_cst[BLUE], BLUE_CHANNEL, pulse_blue, BLUE_FLAGS);
	if (err != 0) {
		LOG_ERR("Error %d: green write failed\n", err);
	}
	return err;
}

int cst_gpio_set_led(uint8_t led_idx, uint32_t val) {
	int err = 0;

	if (led_idx >= ARRAY_SIZE(led_pins_cst)) {
		LOG_ERR("LED index out of the range");
		return -EINVAL;
	}
	// err = gpio_pin_set(led_devs_cst[led_idx], led_pins_cst[led_idx].number, IS_ENABLED(CONFIG_DK_LIBRARY_INVERT_LEDS) ? !val : val);
  //      k_msleep(1000);
	// if (err) {
	// 	LOG_ERR("Cannot write LED gpio");
	// }
	// else {
  //              LOG_INF("GPIO %i is set to %i", led_idx, val);
	// }
	return err;
}

int cst_gpio_set_led_on(uint8_t led_idx) {
	return cst_gpio_set_led(led_idx, 1);
}

int cst_gpio_set_led_off(uint8_t led_idx) {
	return cst_gpio_set_led(led_idx, 0);
}
