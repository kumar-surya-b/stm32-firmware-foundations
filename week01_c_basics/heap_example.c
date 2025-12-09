#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p1 = malloc(sizeof(int));
    int *p2 = malloc(sizeof(int));
    int *p3 = malloc(sizeof(int));

    printf("p1 = %p\n", (void*)p1);
    printf("p2 = %p\n", (void*)p2);
    printf("p3 = %p\n", (void*)p3);

    free(p1);
    free(p2);
    free(p3);
    return 0;
}