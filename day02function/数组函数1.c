#include<stdio.h>

void print(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf(" %d", a[i]);

    }
    printf("\n");
}

int main() {
    int a[10]={1,2,3,4,5,6,7,8,9} ;

    print(a, sizeof(a) / sizeof(a[0]));
    print(a+1,5);//&a[i]=a+i
    return 0;
}