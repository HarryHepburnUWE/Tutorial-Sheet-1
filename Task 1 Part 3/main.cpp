#include "mbed.h"

#define BLINK_DELAY 300ms

DigitalOut led1(LED1);
DigitalOut led2(LED2);
DigitalOut led3(LED3);

void blink_simultaneously() {
    // Turn all LEDs ON
    led1 = 1;
    led2 = 1;
    led3 = 1;
    ThisThread::sleep_for(BLINK_DELAY);

    // Turn all LEDs OFF
    led1 = 0;
    led2 = 0;
    led3 = 0;
    ThisThread::sleep_for(BLINK_DELAY);
}

int main() {
    while (true) {
        blink_simultaneously();
    }
}
