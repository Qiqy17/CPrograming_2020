#include<stdio.h>

//#include<string.h>//strlen/strcpy/strcat/strcmp
int strlen(char *s) {

    char *p = s;
    while (*p)++p;
    return p - s;

}

int main() {
    char s[100] = "helloworld";
    printf("%d\n", strlen(s));

    char *p = s;
    while (*p) {
        putchar(*p);
        ++p;
    };
    p--;
    for (char *q = p; q >= s; q--) {
        putchar(*q);
    }

    return 0;
}