#include<stdio.h>

int main() {
    int n, i, t, a[100];
    while (~scanf("%d", &n)) {
        if (0 == n)break;//如果处理到EOF这行可以忽略
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
/**
 * Sample Input:
 * 4 1 2 3 4
 * 5 1 2 3 4 5
 * Sample Output
 * 10
 * 15
*/