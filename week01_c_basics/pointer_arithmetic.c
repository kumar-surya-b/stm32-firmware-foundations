#include <stdio.h>

int main() {
    int arr[4] = {10, 20, 30, 40};
    int *p = arr;

    printf("p = %p\n", (void*)p);
    printf("p+1 = %p\n", (void*)(p+1));
    printf("p+2 = %p\n", (void*)(p+2));

    return 0;
}