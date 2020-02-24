#include<stdio.h>

int main() {
    printf("sizeof(char)=%d bytes\n",sizeof(char));
    printf("sizeof(short)=%d bytes\n",sizeof(short));
    printf("sizeof(int)=%d bytes\n",sizeof(int));
    printf("sizeof(long)=%d bytes???\n",sizeof(long));
    printf("sizeof(long long)=%d bytes\n",sizeof(long long));
    printf("sizeof(float)=%d bytes\n",sizeof(float));
    printf("sizeof(double)=%d bytes\n",sizeof(double));
    double a[10];
    printf("sizeof(a)=%d bytes\n",sizeof(a));
    printf("length of a=%d elements\n",sizeof(a)/sizeof(a[0]));
    return 0;
}