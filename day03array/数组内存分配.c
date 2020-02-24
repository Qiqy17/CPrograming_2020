#include<stdio.h>

int main() {

    int a[10];
    printf("%u\n",a);//数组名就是数组的起始地址
    int n = sizeof(a) / sizeof(a[0]);
    int i;
    for (i = 0; i < n; i++) {
        printf("%u ", &a[i]);
    }
    printf("\n");
    return 0;
}