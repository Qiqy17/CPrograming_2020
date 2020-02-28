#include<stdio.h>

void foo(int a[]) {
    printf("in function foo a=%x\n", a);
    ++a[0];
}

int main() {
    int a[3] = {1, 2, 3};

    printf("in function main a=%x\n", a);
    foo(a);
    printf("%d\n", a[0]);

    //print(a);
    //print(b);
    return 0;
}