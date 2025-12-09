#include <stdio.h>
#include <stdlib.h>

int global_var = 100;        // .data section
static int static_var = 50;  // .data section
int uninitialized_var;       // .bss section

int main() {
    int local_var = 10;      // stack
    int *heap_var = malloc(sizeof(int)); // heap
    *heap_var = 200;

    printf("Code (main) at: %p\n", (void*)main);
    printf("global_var at: %p\n", (void*)&global_var);
    printf("static_var at: %p\n", (void*)&static_var);
    printf("uninitialized_var at: %p\n", (void*)&uninitialized_var);
    printf("local_var at: %p\n", (void*)&local_var);
    printf("heap_var pointer at: %p\n", (void*)&heap_var);
    printf("heap allocated memory at: %p\n", (void*)heap_var);

    free(heap_var);
    return 0;
}
