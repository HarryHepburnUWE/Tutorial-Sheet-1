#include "mbed.h"

#define LED1_DELAY 200ms
#define LED2_DELAY 400ms
#define LED3_DELAY 600ms

DigitalOut led1(LED1);
DigitalOut led2(LED2);
DigitalOut led3(LED3);

void blink_pattern() {
    // LED1 ON for 200ms, then OFF
    led1 = 1;
    ThisThread::sleep_for(LED1_DELAY);
    led1 = 0;

    // LED2 ON for 400ms, then OFF
    ThisThread::sleep_for(200ms); // Wait for LED1 to turn off
    led2 = 1;
    ThisThread::sleep_for(LED2_DELAY);
    led2 = 0;

    // LED3 ON for 600ms, then OFF
    ThisThread::sleep_for(400ms); // Wait for LED2 to turn off
    led3 = 1;
    ThisThread::sleep_for(LED3_DELAY);
    led3 = 0;

    // All LEDs are off now, repeat the pattern
}

int main() {
    while (true) {
        blink_pattern(); // Repeat the pattern
    }
}
