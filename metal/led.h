/* Copyright 2018 SiFive, Inc */
/* SPDX-License-Identifier: Apache-2.0 */

#ifndef METAL__LED_H
#define METAL__LED_H

/*!
 * @file led.h
 * @brief API for manipulating LEDs
 */

#include <metal/generated/led.h>
#include <stdint.h>

/*!
 * @brief A handle for an LED
 */
struct metal_led {
    uint32_t __led_index;
};

void metal_led_enable(struct metal_led led);

/*!
 * @brief Turn an LED on
 * @param led The handle for the LED
 */
void metal_led_on(struct metal_led led);

/*!
 * @brief Turn an LED off
 * @param led The handle for the LED
 */
void metal_led_off(struct metal_led led);

/*!
 * @brief Toggle the on/off state of an LED
 * @param led The handle for the LED
 */
void metal_led_toggle(struct metal_led led);

#endif
