#include<stdio.h>

//scanf函数返回正确读取变量的个数，如果遇到EOF则返回-1
int main() {
    int a, b;

    while (~scanf("%d%d", &a, &b)) {
        printf("%d\n", a + b);
    }
    return 0;
}
/**
 * Sample Input:
 * 1 2
 * 3 4
 * Sample Output
 * 3
 * 7
*/