#include<stdio.h>


int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }

int main() {
    printf("%d\n", 2 == gcd(6, 8));//expectedValue==actualValue
    printf("%d\n", 2 == gcd(8, 6));
    printf("%d\n", 2 == gcd(2, 0));
    printf("%d\n", 2 == gcd(0, 2));


    return 0;
}


