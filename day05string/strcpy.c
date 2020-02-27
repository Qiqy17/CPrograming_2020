#include<stdio.h>

//#include<string.h>//strlen/strcpy/strcat/strcmp

void strcpy(char t[], char s[]) {

    int i;

    for (i = 0; s[i] != '\0'; i++) {
        t[i] = s[i];
    }
    t[i] = 0;
}

int main() {
    char s[100] = "helloworld";
    char t[100] = "";
    strcpy(t, s);
    puts(t);

    return 0;
}