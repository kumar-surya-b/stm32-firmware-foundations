#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;

    printf("Value of x = %d\n", x);
    printf("Value via pointer = %d\n", *p);
    printf("Address of x = %p\n", (void*)&x);
    printf("Pointer p = %p\n", (void*)p);

    return 0;
}