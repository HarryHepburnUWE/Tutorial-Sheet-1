#include "mbed.h"

#define BLINK_DELAY 500ms

DigitalOut led1(LED1);
DigitalOut led2(LED2);
DigitalOut led3(LED3);

void blink_in_sequence() {
    // LED1 ON, then OFF
    led1 = 1;
    ThisThread::sleep_for(BLINK_DELAY);
    led1 = 0;
    ThisThread::sleep_for(BLINK_DELAY);

    // LED2 ON, then OFF
    led2 = 1;
    ThisThread::sleep_for(BLINK_DELAY);
    led2 = 0;
    ThisThread::sleep_for(BLINK_DELAY);

    // LED3 ON, then OFF
    led3 = 1;
    ThisThread::sleep_for(BLINK_DELAY);
    led3 = 0;
    ThisThread::sleep_for(BLINK_DELAY);
}

int main() {
    while (true) {
        blink_in_sequence();
    }
}
