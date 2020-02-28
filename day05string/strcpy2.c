#include<stdio.h>

//#include<string.h>//strlen/strcpy/strcat/strcmp

void strcpy(char *t, char *s) {
    while (*t++ = *s++);

}

int main() {
    char s[100] = "helloworld";
    char t[100] = "";
    strcpy(t, s);
    puts(t);

    return 0;
}