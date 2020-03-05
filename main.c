#include<stdio.h>

int ok(char *str) {
    int a, b, c, d;
    for (char *p = str; *p; ++p)
        if (*p == '.')*p = ' ';
    int flag = sscanf(str, "%d%d%d%d", &a, &b, &c, &d);
    if (flag < 4)return 0;
    //if(a<0||a>255)return 0;
    return 1;//TODO
}

int main() {
    char str[1000];
    //while(~scanf("%s", str))
    while (gets(str)) {
        if (ok(str)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}

