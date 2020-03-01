#include<stdio.h>
#include<stdlib.h>//rand qsort bsearch

void print(int *a, int n) {
    int i;
    for (i = 0; i < n; i++)
        printf(" %d", a[i]);
    printf("\n");
}

int inc(int *a, int *b) {
    return *a - *b;
}

int dec(int *a, int *b) {
    return *b - *a;
}

int mars(int *a, int *b) {
    return *a - *b;
}

int main() {
    int a[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};
    int n = sizeof(a) / sizeof(a[0]);
    print(a, n);
    qsort(a, n, sizeof(a[0]), inc);
    print(a, n);
    qsort(a, n, sizeof(a[0]), dec);
    print(a, n);
    return 0;
}

