#include<stdio.h>
#include<assert.h>


int main() {
    //sscanf/sprinf
    //n=123456 => 612345
    int n = 12344556, m;
    char str[100];
    // printf("%d%d",n%10,n/10);
    sprintf(str, "%d%d", n % 10, n / 10);//str="612345"
    sscanf(str, "%d", &m);
    printf("m=%d\n", m);
    return 0;
}

