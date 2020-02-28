#include<stdio.h>

//#include<string.h>//strlen/strcpy/strcat/strcmp

void strcat(char t[], char s[]) {//t+=s
    while (*t)t++;
    while (*t++ = *s++);
}

int main() {
    char s[100] = "helloworld！";
    char t[100] = "I will say: ";
    strcat(t, s);
    puts(t);

    return 0;
}