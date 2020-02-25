#include<stdio.h>

int main() {
    int n, i, t, a[100];
    while (~scanf("%d", &n)) {
        if (0 == n)break;
        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        int s = 0;
        for (i = 0; i < n; i++)
            s += a[i];

        printf("%d\n", s);
    }

    return 0;
}