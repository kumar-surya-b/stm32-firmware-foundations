#include <stdio.h>

void func2(int a) {
    int y = a + 5;
    printf("Address of y in func2: %p\n", (void*)&y);
}

void func1(int x) {
    int z = x * 2;
    printf("Address of z in func1: %p\n", (void*)&z);
    func2(z);
}

int main() {
    int a = 10;
    printf("Address of a in main: %p\n", (void*)&a);
    func1(a);
    return 0;
}
