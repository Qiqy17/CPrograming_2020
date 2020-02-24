#include<stdio.h>
#define N 21
#define ll long long
int main() {
    ll a[N];
    a[0] = a[1] = 1;
    int i;
    for (i = 2; i <N; i++) {
        a[i] = a[i - 1] * i;
    }
    for (i = 0; i <N; i++) {
        printf(" %lld", a[i]);
    }
    ll s = 0;
    for (i = 1; i <N; i++)s += a[i];
    printf("\ns=%lld\n", s);
    return 0;
}