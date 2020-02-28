#include<stdio.h>


int main() {
    double a = 1, b = -1, c = -6;
    double x1, x2;
    root2(a, b, c, &x1, &x2);
    printf("x1=%f x2=%f\n", x1, x2);
    return 0;
}