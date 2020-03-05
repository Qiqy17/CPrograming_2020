#include<stdio.h>
#include<assert.h>


int main() {
    //sscanf/sprinf
    // char str[1000]="192.168.1.1";
    char str[1000] = "a.b.c.d";
    int a, b, c, d;
    int flag = sscanf(str, "%d.%d.%d.%d", &a, &b, &c, &d);
    printf("%d\n", flag);
    return 0;
}

