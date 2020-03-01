#include<stdio.h>

int add(int, int);

int mul(int, int);

int main() {
    int (*f)(int, int);//函数指针
    f = add;
    printf("%d\n", f(3, 4));
    f = mul;
    printf("%d\n", f(3, 4));

    return 0;
}

int add(int a, int b) {

    return a + b;
}

int mul(int a, int b) {

    return a * b;
}