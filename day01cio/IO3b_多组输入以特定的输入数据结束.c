#include<stdio.h>

//scanf函数返回正确读取变量的个数，如果遇到EOF则返回-1,提前判断数据是否是中止的测试数据
int main() {
    int a, b;

    while (~scanf("%d%d", &a, &b)) {
        if (0 == a && 0 == b)
            break;
        printf("%d\n", a + b);
    }
    return 0;
}
/**
 * Sample Input:
 * 1 2
 * 3 4
 * 0 0
 * Sample Output
 * 3
 * 7
*/