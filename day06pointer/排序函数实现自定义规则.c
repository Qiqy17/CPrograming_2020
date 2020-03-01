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

void sort(int *a, int n, int(*compare)(int *, int *)) {
    int i, j, k, t;
    for (i = 0; i < n - 1; i++) {
        for (k = i, j = i + 1; j < n; j++) {
            if (compare(&a[j], &a[k]) < 0)k = j;
        }
        if (k != i)t = a[k], a[k] = a[i], a[i] = t;
    }
}

int main() {
    int a[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};
    int n = sizeof(a) / sizeof(a[0]);
    print(a, n);
    sort(a, n, inc);
    print(a, n);
    sort(a, n, dec);
    print(a, n);
    return 0;
}

