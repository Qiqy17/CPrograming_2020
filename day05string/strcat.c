#include<stdio.h>

//#include<string.h>//strlen/strcpy/strcat/strcmp

void strcat(char t[], char s[]) {
    int i, j = 0;
    while (t[j] != '\0')j++;
    for (i = 0; s[i] != '\0'; i++) {
        t[i + j] = s[i];
    }
    t[i + j] = 0;
}

int main() {
    char s[100] = "helloworld！";
    char t[100] = "I will say: ";
    strcat(t, s);
    puts(t);

    return 0;
}