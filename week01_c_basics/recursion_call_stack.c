#include <stdio.h>

void test(int n) {
    int x = n;
    printf("n = %d, address of x = %p\n", n, (void*)&x);
    if(n > 0) test(n - 1);
}

int main() {
    test(5);
    return 0;
}