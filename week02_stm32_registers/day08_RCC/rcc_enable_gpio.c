#include <stdint.h>

#define RCC_AHB1ENR   (*((volatile uint32_t*)0x40023830))

int main(void)
{
    // Enable GPIOA clock
    RCC_AHB1ENR |= (1 << 0);   // GPIOAEN = bit 0

    // Enable GPIOC clock as example
    RCC_AHB1ENR |= (1 << 2);   // GPIOCEN = bit 2

    while (1);
}