#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    int *p = arr;

    for(int i = 0; i < 3; i++) {
        printf("arr[%d] = %d via pointer = %d\n", i, arr[i], *(p+i));
    }

    printf("Base address of array = %p\n", (void*)arr);
    printf("Pointer value = %p\n", (void*)p);

    return 0;
}