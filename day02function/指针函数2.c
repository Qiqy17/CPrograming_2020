#include<stdio.h>


void foo(int a, int b, int *c, int *d) {
    *c = a + b;
    *d = a * b;
}

int main() {
    int a = 3, b = 4, c, d;
    // c = add(a, b);//c==7
    foo(a, b, &c, &d);
    printf("%d %d\n", c, d);
    return 0;
}