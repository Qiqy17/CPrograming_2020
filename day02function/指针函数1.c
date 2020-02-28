#include<stdio.h>

int add(int a, int b) {
    ++a;
    return a + b;
}

void foo(int a) {
    a++;
}

void foo2(int *a) {
    ++*a;
}

int main() {
    int a = 3, b = 4;
    printf("%d\n", add(a, b));
    printf("a=%d b=%d\n", a, b);
    foo(a);
    printf("a=%d b=%d\n", a, b);
    foo2(&a);
    printf("a=%d b=%d\n", a, b);
    return 0;
}