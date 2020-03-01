#include<stdio.h>
#include<stdlib.h>//rand qsort bsearch

void print(int *a, int n) {
    int i;
    for (i = 0; i < n; i++)
        printf(" %d", a[i]);
    printf("\n");
}

int inc(const void *a, const void *b) {
    return *(int *) a - *(int *) b;
}

int dec(const void *a, const void *b) {
    return *(int *) b - *(int *) a;
}

int mars(const void *a, const void *b) {
    return *(int *) a - *(int *) b;//TODO
}

int main() {
    int a[] = {1111, 3123, 5, 7, 9, 2, 4, 6, 8, 110};
    unsigned n = sizeof(a) / sizeof(a[0]);
    print(a, n);
    qsort(a, n, sizeof(a[0]), inc);
    print(a, n);
    qsort(a, n, sizeof(a[0]), dec);
    print(a, n);
    qsort(a, n, sizeof(a[0]), mars);
    print(a, n);
    return 0;
}

