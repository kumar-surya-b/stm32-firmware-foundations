#include <stdint.h>

#define RCC_APB2ENR (*((volatile uint32_t*)0x40023844))
#define RCC_APB1ENR (*((volatile uint32_t*)0x40023840))

int main(void)
{
    // Enable USART1 clock (APB2)
    RCC_APB2ENR |= (1 << 4);   // USART1EN = bit 4

    // Enable USART2 clock (APB1)
    RCC_APB1ENR |= (1 << 17);  // USART2EN = bit 17

    while (1);
}