#include<stdio.h>

int main() {

    int a[]={1,2,3};
    int n = sizeof(a) / sizeof(a[0]);
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}