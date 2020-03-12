#include<stdio.h>

int g(int n) {//n!
    return n <= 1 ? 1 : g(n - 1) * n;
}

int f(int n) {//拆数字 逆向访问整数的每一个位123
    int tot = 0;
    while (n > 0) {
        tot += g(n % 10);//累加末尾的阶乘和
        n /= 10;
    }
    return tot;
}

int main() {
    for (int n = 1; n <= 1e7; n++) {
        if (n == f(n)) {
            printf("%d ", n);
        }
    }
    return 0;
}