#include<stdio.h>

int main() {
    char s[100] = "helloworld";
    puts(s);
    s[5] = '\0';
    puts(s);


    return 0;
}