#include<stdio.h>

//#include<string.h>//strlen/strcpy/strcat/strcmp
int strlen(char s[]) {

    int i = 0;
    while (s[i] != '\0')i++;
    return i;
}

int main() {
    char s[100] = "helloworld";
    s[5] = 0;//s[5]='\0';
    printf("%d\n", strlen(s));
    printf("%d\n", strlen(s + 6));

    return 0;
}