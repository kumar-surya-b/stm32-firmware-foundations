#include <stdint.h>

#define RCC_AHB1ENR   (*((volatile uint32_t*)0x40023830))

#define GPIOA_BASE    0x40020000
#define GPIOA_MODER   (*((volatile uint32_t*)(GPIOA_BASE + 0x00)))
#define GPIOA_ODR     (*((volatile uint32_t*)(GPIOA_BASE + 0x14)))

void delay() {
    for (volatile int i = 0; i < 500000; i++);
}

int main(void)
{
    // 1. Enable clock for GPIOA
    RCC_AHB1ENR |= (1 << 0);  // bit 0 enables GPIOA

    // 2. Set PA5 to output mode
    GPIOA_MODER &= ~(3 << (5 * 2));  // clear mode bits
    GPIOA_MODER |=  (1 << (5 * 2));  // set output mode (01)

    // 3. Toggle the LED forever
    while (1)
    {
        GPIOA_ODR ^= (1 << 5);  // toggle PA5
        delay();
    }
}