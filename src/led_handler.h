#ifndef __CUSTOM_LEDS_H__
#define __CUSTOM_LEDS_H__

/** @file led_handler.h
 * @brief Module for handling custom LEDs for my Nordic nrf5340 DK.
 * @{
 */

#include <zephyr.h>
#include <device.h>
#include <devicetree.h>
#include <drivers/gpio.h>

#define CST_LED1           0
//#define DK_LED2           1
//#define DK_LED3           2
//#define DK_LED4           3

/** @brief Initialize the gpio's to control the LEDs.
 *
 *  @retval 0           If the operation was successful.
 *                      Otherwise, a (negative) error code is returned.
 */
int gpio_leds_init(void);

/** @brief Set a single LED value.
 *
 *  This function turns a single LED on or off.
 *
 *  @param led_idx Index of the LED.
 *  @param val     Value for the LED: 1 - turn on, 0 - turn off
 *
 *  @retval 0           If the operation was successful.
 *                      Otherwise, a (negative) error code is returned.
 *
 *  @sa dk_set_led_on, dk_set_led_off
 */
int cst_gpio_set_led(uint8_t led_idx, uint32_t val);

/** @brief Turn a single LED on.
 *
 *  @param led_idx Index of the LED.
 *
 *  @retval 0           If the operation was successful.
 *                      Otherwise, a (negative) error code is returned.
 */
int cst_gpio_set_led_on(uint8_t led_idx);
// void cst_gpio_set_led_on(void);

/** @brief Turn a single LED off.
 *
 *  @param led_idx Index of the LED.
 *
 *  @retval 0           If the operation was successful.
 *                      Otherwise, a (negative) error code is returned.
 */
int cst_gpio_set_led_off(uint8_t led_idx);
// void cst_gpio_set_led_off(void);

#endif
