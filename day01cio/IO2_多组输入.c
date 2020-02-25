#include<stdio.h>

int main() {
    int n, a, b, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d%d", &a, &b);
        printf("%d\n", a + b);
    }

    return 0;
}
/**
 * Sample Input:
 * 2
 * 1 2
 * 3 4
 * Sample Output
 * 3
 * 7
*/