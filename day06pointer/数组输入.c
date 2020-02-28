#include<stdio.h>


int main() {
    //&a[i]=a+i; a[i]=*(a+i)
    int a[10];
    a[0] = 1;
    ++*a;
    printf("%d\n", *a);
    int i;
    for (i = 0; i < 10; i++) {
        scanf("%d", a + i);
    }
    for (i = 0; i < 10; i++) {
        printf("%d ", *(a + i));
    }
    return 0;
}