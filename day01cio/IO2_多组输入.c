#include<stdio.h>

int main() {
    int T, a, b, i;
    scanf("%d", &T);
    while (T--) {
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