
#include<stdio.h>

int main() {
    int x = 1023;
    int *p = &x;
    printf("%d\n", *p);
    void *q = p;
    printf("%d\n", *(char *) q);
    printf("%d\n", *((char *) q + 1));
    printf("%d\n", *((char *) q + 2));
    printf("%d\n", *((char *) q + 3));
    return 0;
}

