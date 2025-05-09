/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"


// Blinking rate in milliseconds
#define BLINKING_RATE     500ms


int main()
{
    // Initialise the digital pin LED1 as an output
    DigitalOut led(LED1);
    DigitalOut led2(LED2);
    DigitalOut led3(LED3);

    while (true) {
        led  = !led;
        led2 = !led2;
        led3 = !led3;
        ThisThread::sleep_for(BLINKING_RATE);
    }
}
