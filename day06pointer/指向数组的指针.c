#include<stdio.h>

void print(int *a, int n) {
    int *p;
    for (p = a; p < a + n; ++p)
        printf("%d ", *p);
    printf("\n");
}

int main() {

    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int *p = a;
    ++p[1];//a[1]++
    p++;
    ++p[2];//a[3]++;
    --p;
    ++(p + 5)[0];//a[5]++
    ++(p + 6)[3];//a[9]++
    ++(p + 2)[-1];//a[1]++;
    print(a, 10);


    return 0;
}