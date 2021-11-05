/*
 * Copyright (c) 2020 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: LicenseRef-Nordic-5-Clause
 */

#ifndef __COAP_SERVER_CLIENT_INTRFACE_H__
#define __COAP_SERVER_CLIENT_INTRFACE_H__

#define COAP_PORT 5683

/**@brief Enumeration describing light commands. */
enum light_command {
	THREAD_COAP_UTILS_LIGHT_1_CMD_OFF = '0',
	THREAD_COAP_UTILS_LIGHT_1_CMD_ON = '1',
	THREAD_COAP_UTILS_LIGHT_CMD_TOGGLE = '2',
	THREAD_COAP_UTILS_LIGHT_2_CMD_OFF = '3',
	THREAD_COAP_UTILS_LIGHT_2_CMD_ON = '4',
	THREAD_COAP_UTILS_RED_LIGHT = '5',
	THREAD_COAP_UTILS_GREEN_LIGHT = '6',
	THREAD_COAP_UTILS_BLUE_LIGHT = '7',
};

#define PROVISIONING_URI_PATH "provisioning"
#define LIGHT_URI_PATH "light"

#endif
