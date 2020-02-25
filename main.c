#include<stdio.h>

void print(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf(" %d", a[i]);

    }
    printf("\n");
}

int main() {
    int a[10] ;
    input(a,10);
    print(a,10);
    return 0;
}