// /*
//  * Copyright (c) 2020 Nordic Semiconductor ASA
//  *
//  * SPDX-License-Identifier: LicenseRef-Nordic-5-Clause
//  */
//
// #include <zephyr.h>
// #include <dk_buttons_and_leds.h>
// #include <logging/log.h>
// #include <net/openthread.h>
// #include <openthread/thread.h>
//
// #include "ot_coap_utils.h"
// #include "led_handler.h"
//
// LOG_MODULE_REGISTER(coap_server, CONFIG_COAP_SERVER_LOG_LEVEL);
//
// #define OT_CONNECTION_LED DK_LED1
// #define PROVISIONING_LED DK_LED3
// #define LIGHT_LED_1 CST_LED1
// #define LIGHT_LED_2 CST_LED2
//
// #define PERIOD_USEC	(1000000 / 50U)
//
// static struct k_work provisioning_work;
//
// static struct k_timer led_timer;
// static struct k_timer provisioning_timer;
//
// static void on_light_request(uint8_t command)
// {
// 	static uint8_t val;
//
//
// 	switch (command) {
// 	case THREAD_COAP_UTILS_LIGHT_1_CMD_ON:
// 		cst_gpio_set_led_on(LIGHT_LED_1);
// 		val = 1;
// 		break;
//
// 	case THREAD_COAP_UTILS_LIGHT_1_CMD_OFF:
// 		cst_gpio_set_led_off(LIGHT_LED_1);
// 		val = 0;
// 		break;
//
// 	case THREAD_COAP_UTILS_LIGHT_2_CMD_ON:
// 		cst_gpio_set_led_on(LIGHT_LED_2);
// 		val = 1;
// 		break;
//
// 	case THREAD_COAP_UTILS_LIGHT_2_CMD_OFF:
// 		cst_gpio_set_led_off(LIGHT_LED_2);
// 		val = 0;
// 		break;
//
// 	case THREAD_COAP_UTILS_LIGHT_CMD_TOGGLE:
// 		val = !val;
// 		cst_gpio_set_led(LIGHT_LED_1, val);
// 		cst_gpio_set_led(LIGHT_LED_2, val);
// 		break;
// 	case THREAD_COAP_UTILS_RED_LIGHT:
// 		rgb_leds_set_red(PERIOD_USEC);
// 		break;
// 	case THREAD_COAP_UTILS_GREEN_LIGHT:
// 		rgb_leds_set_green(PERIOD_USEC);
// 		break;
// 	case THREAD_COAP_UTILS_BLUE_LIGHT:
// 		rgb_leds_set_blue(PERIOD_USEC);
// 		break;
//
// 	default:
// 		break;
// 	}
// }
//
// static void activate_provisioning(struct k_work *item)
// {
// 	ARG_UNUSED(item);
//
// 	ot_coap_activate_provisioning();
//
// 	k_timer_start(&led_timer, K_MSEC(100), K_MSEC(100));
// 	k_timer_start(&provisioning_timer, K_SECONDS(5), K_NO_WAIT);
//
// 	LOG_INF("Provisioning activated");
// }
//
// static void deactivate_provisionig(void)
// {
// 	k_timer_stop(&led_timer);
// 	k_timer_stop(&provisioning_timer);
//
// 	if (ot_coap_is_provisioning_active()) {
// 		ot_coap_deactivate_provisioning();
// 		LOG_INF("Provisioning deactivated");
// 	}
// }
//
// static void on_provisioning_timer_expiry(struct k_timer *timer_id)
// {
// 	ARG_UNUSED(timer_id);
//
// 	deactivate_provisionig();
// }
//
// static void on_led_timer_expiry(struct k_timer *timer_id)
// {
// 	static uint8_t val = 1;
//
// 	ARG_UNUSED(timer_id);
//
// 	dk_set_led(PROVISIONING_LED, val);
// 	val = !val;
// }
//
// static void on_led_timer_stop(struct k_timer *timer_id)
// {
// 	ARG_UNUSED(timer_id);
//
// 	dk_set_led_off(PROVISIONING_LED);
// }
//
// static void on_button_changed(uint32_t button_state, uint32_t has_changed)
// {
// 	uint32_t buttons = button_state & has_changed;
//
// 	if (buttons & DK_BTN4_MSK) {
// 		k_work_submit(&provisioning_work);
// 	}
// }
//
// static void on_thread_state_changed(uint32_t flags, void *context)
// {
// 	struct openthread_context *ot_context = context;
//
// 	if (flags & OT_CHANGED_THREAD_ROLE) {
// 		switch (otThreadGetDeviceRole(ot_context->instance)) {
// 		case OT_DEVICE_ROLE_CHILD:
// 		case OT_DEVICE_ROLE_ROUTER:
// 		case OT_DEVICE_ROLE_LEADER:
// 			dk_set_led_on(OT_CONNECTION_LED);
// 			break;
//
// 		case OT_DEVICE_ROLE_DISABLED:
// 		case OT_DEVICE_ROLE_DETACHED:
// 		default:
// 			dk_set_led_off(OT_CONNECTION_LED);
// 			deactivate_provisionig();
// 			break;
// 		}
// 	}
// }
//
// #define SLEEP_TIME_MS   1000
//
// void main(void)
// {
// 	int ret;
//
// 	LOG_INF("Start CoAP-server sample");
//
//
// 	k_timer_init(&led_timer, on_led_timer_expiry, on_led_timer_stop);
// 	k_timer_init(&provisioning_timer, on_provisioning_timer_expiry, NULL);
//
// 	k_work_init(&provisioning_work, activate_provisioning);
//
// 	ret = ot_coap_init(&deactivate_provisionig, &on_light_request);
// 	if (ret) {
// 		LOG_ERR("Could not initialize OpenThread CoAP");
// 		goto end;
// 	}
//
// 	ret = dk_leds_init();
// 	// ret = cst_rgb_leds_init();
// 	ret = gpio_leds_init();
// 	cst_gpio_set_led_on(LIGHT_LED_2);
// 	// rgb_leds_set_blue(PERIOD_USEC);
// 	if (ret) {
// 		LOG_ERR("Could not initialize leds, err code: %d", ret);
// 		goto end;
// 	}
//
// 	ret = dk_buttons_init(on_button_changed);
// 	if (ret) {
// 		LOG_ERR("Cannot init buttons (error: %d)", ret);
// 		goto end;
// 	}
//
// 	//openthread_set_state_changed_cb(on_thread_state_changed);
// 	//openthread_start(openthread_get_default_context());
//
// end:
// 	return;
// }

/*
 * Copyright (c) 2016 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file Sample app to demonstrate PWM-based RGB LED control
 */

#include <zephyr.h>
#include <sys/printk.h>
#include <device.h>
#include <drivers/pwm.h>

/*
 * Extract devicetree configuration.
 */

#define RED_NODE DT_ALIAS(red_pwm_led_custom)
#define GREEN_NODE DT_ALIAS(green_pwm_led_custom)
#define BLUE_NODE DT_ALIAS(blue_pwm_led_custom)

#if DT_NODE_HAS_STATUS(RED_NODE, okay)
#define RED_CTLR_NODE	DT_PWMS_CTLR(RED_NODE)
#define RED_CHANNEL	DT_PWMS_CHANNEL(RED_NODE)
#define RED_FLAGS	DT_PWMS_FLAGS(RED_NODE)
#else
#error "Unsupported board: red-pwm-led devicetree alias is not defined"
#define RED_CTLR_NODE	DT_INVALID_NODE
#define RED_CHANNEL	0
#define RED_FLAGS	0
#endif

#if DT_NODE_HAS_STATUS(GREEN_NODE, okay)
#define GREEN_CTLR_NODE	DT_PWMS_CTLR(GREEN_NODE)
#define GREEN_CHANNEL	DT_PWMS_CHANNEL(GREEN_NODE)
#define GREEN_FLAGS	DT_PWMS_FLAGS(GREEN_NODE)
#else
#error "Unsupported board: green-pwm-led devicetree alias is not defined"
#define GREEN_CTLR_NODE	DT_INVALID_NODE
#define GREEN_CHANNEL	0
#define GREEN_FLAGS	0
#endif

#if DT_NODE_HAS_STATUS(BLUE_NODE, okay)
#define BLUE_CTLR_NODE	DT_PWMS_CTLR(BLUE_NODE)
#define BLUE_CHANNEL	DT_PWMS_CHANNEL(BLUE_NODE)
#define BLUE_FLAGS	DT_PWMS_FLAGS(BLUE_NODE)
#else
#error "Unsupported board: blue-pwm-led devicetree alias is not defined"
#define BLUE_CTLR_NODE	DT_INVALID_NODE
#define BLUE_CHANNEL	0
#define BLUE_FLAGS	0
#endif

/*
 * 50 is flicker fusion threshold. Modulated light will be perceived
 * as steady by our eyes when blinking rate is at least 50.
 */
#define PERIOD_USEC	(1000000U / 50U)
#define STEPSIZE_USEC	2000

static int pwm_set(const struct device *pwm_dev, uint32_t pwm_pin,
		     uint32_t pulse_width, pwm_flags_t flags)
{
	return pwm_pin_set_usec(pwm_dev, pwm_pin, PERIOD_USEC, pulse_width, flags);
}

enum { RED, GREEN, BLUE };

void main(void)
{
	const struct device *pwm_dev[3];
	uint32_t pulse_red, pulse_green, pulse_blue; /* pulse widths */
	int ret;

	// printf("%", BLUE_CTLR_NODE);

	printk("PWM-based RGB LED control\n");

	pwm_dev[RED] = DEVICE_DT_GET(RED_CTLR_NODE);
	pwm_dev[GREEN] = DEVICE_DT_GET(GREEN_CTLR_NODE);
	pwm_dev[BLUE] = DEVICE_DT_GET(BLUE_CTLR_NODE);

	if (!device_is_ready(pwm_dev[RED])) {
		printk("Error: red PWM device %s is not ready\n", pwm_dev[RED]->name);
		return;
	}

	if (!device_is_ready(pwm_dev[GREEN])) {
		printk("Error: green PWM device %s is not ready\n", pwm_dev[GREEN]->name);
		return;
	}

	if (!device_is_ready(pwm_dev[BLUE])) {
		printk("Error: blue PWM device %s is not ready\n", pwm_dev[BLUE]->name);
		return;
	}

	while (1) {
		for (pulse_red = 0U; pulse_red <= PERIOD_USEC; pulse_red += STEPSIZE_USEC) {
				ret = pwm_set(pwm_dev[RED], RED_CHANNEL, pulse_red, RED_FLAGS);
				if (ret != 0) {
					printk("Error %d: red write failed\n", ret);
					return;
				}
				printk("%i", pulse_red);
				k_sleep(K_SECONDS(1));
		}
  	ret = pwm_set(pwm_dev[RED], RED_CHANNEL, 0U, RED_FLAGS);

		if (ret != 0) {
            printk("Error %d: red write failed\n", ret);
            return;
    }


		k_sleep(K_SECONDS(1));
		for (pulse_green = 0U; pulse_green <= PERIOD_USEC; pulse_green += STEPSIZE_USEC) {
				ret = pwm_set(pwm_dev[GREEN], GREEN_CHANNEL,
					      pulse_green, GREEN_FLAGS);
				if (ret != 0) {
					printk("Error %d: green write failed\n", ret);
					return;
				}
				k_sleep(K_SECONDS(1));
		}

		ret = pwm_set(pwm_dev[GREEN], GREEN_CHANNEL, 0U, GREEN_FLAGS);
    if (ret != 0) {
            printk("Error %d: green write failed\n", ret);
            return;
    }
		k_sleep(K_SECONDS(1));
		//
		for (pulse_blue = 0U; pulse_blue <= PERIOD_USEC; pulse_blue += STEPSIZE_USEC) {
					ret = pwm_set(pwm_dev[BLUE], BLUE_CHANNEL, pulse_blue, BLUE_FLAGS);
					if (ret != 0) {
						printk("Error %d: blue write failed\n", ret);
						return;
					}
					k_sleep(K_SECONDS(1));
				}
			ret = pwm_set(pwm_dev[BLUE], BLUE_CHANNEL, 0U, BLUE_FLAGS);
	    if (ret != 0) {
	            printk("Error %d: blue write failed\n", ret);
	            return;
	    }
			k_sleep(K_SECONDS(1));
	}
}
