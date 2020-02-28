#include<stdio.h>


int main() {
    int x = 3;
    x = x + 6;
    //++x;
    *(&x) += 2;
    printf("%d\n", x);


    return 0;
}