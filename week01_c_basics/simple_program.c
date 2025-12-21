#include <stdint.h>

extern uint32_t _stack_start;

int global_val = 100;
static int static_val = 50;
int bss_var;   // will be zeroed

void Reset_Handler(void)
{
    while (1); // loop forever
}

int main(void)
{
    return 0;
}
