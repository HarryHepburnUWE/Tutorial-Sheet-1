#include "mbed.h"

#define BLINK_DELAY 200ms
#define BLINK_COUNT 5

DigitalOut led1(LED1);
DigitalOut led2(LED2);
DigitalOut led3(LED3);

void blink_together_and_hold() {
    // Phase 1: Blink all LEDs together 5 times
    for (int i = 0; i < BLINK_COUNT; i++) {
        // Turn all LEDs ON
        led1 = 1;
        led2 = 1;
        led3 = 1;
        ThisThread::sleep_for(BLINK_DELAY);  // Wait for 200 ms

        // Turn all LEDs OFF
        led1 = 0;
        led2 = 0;
        led3 = 0;
        ThisThread::sleep_for(BLINK_DELAY);  // Wait for 200 ms
    }

    // Phase 2: After 5 blinks, LED1 stays ON, LED2 and LED3 stay OFF
    led1 = 1;  // LED1 stays ON
    led2 = 0;  // LED2 stays OFF
    led3 = 0;  // LED3 stays OFF

    // No further blinking required, so we enter an infinite loop to hold this state
    while (true) {
        // LED1 stays on, LED2 and LED3 stay off
        // Add any further logic here if needed, but this is the final state
    }
}

int main() {
    while (true) {
        blink_together_and_hold();  // Execute the blinking and holding behavior
    }
}

