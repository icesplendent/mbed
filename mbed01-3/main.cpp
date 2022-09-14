#include "ThisThread.h"
#include "mbed.h"

// Blinking rate in milliseconds
#define BLINKING_RATE 1000ms

// main() runs in its own thread in the OS
int main()
{
    // Initialize the digital pin LED01 as an output
    DigitalOut led(LED1);

    for (int i = 0; i < 10; i++) {
        led = !led;
        printf("%1.5f\n", 3.14159);
        ThisThread::sleep_for(BLINKING_RATE);
    }
}

