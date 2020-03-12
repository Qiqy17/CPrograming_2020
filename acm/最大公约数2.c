#include<stdio.h>

typedef long long LL;

LL gcd(LL a, LL b) {//O(log(max(a,b)))
    return b ? gcd(b, a % b) : a;
}


int main() {
    LL x0, y0, P, Q, t, ans;
    while (~scanf("%lld%lld", &x0, &y0)) {
        t = x0 * y0;
        ans = 0;
        for (P = 1; P * P <= t; P++) {//因子分解 sqrt(t)
            if (t % P)continue;
            Q = t / P;
            if (gcd(P, Q) == x0) {
                if (P == Q)++ans;//P=Q 计算一对
                else ans += 2;//P<Q (P,Q）,（Q,P）计算两对
            }
        }
        printf("%lld\n", ans);
    }
    return 0;
}
//gcd(P,Q)=x0 lcm(P,Q)=y0
//P*Q=x0*y0
//输入二个正整数x0，y0（2<=x0<100000，2<=y0<=1000000），求出满足下列条件的P，Q的个数。
//
//条件：
//
//1. P，Q是正整数；
//
//2. 要求P，Q以x0为最大公约数，以y0为最小公倍数。
//
//试求：
//
//满足条件的所有可能的两个正整数的个数。