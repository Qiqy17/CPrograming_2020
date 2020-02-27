#include<stdio.h>

int main() {
    char s[100];
    //scanf("%s", s);
    gets(s);
//    int i;
//    for (i = 0; i < 100; i++)
//    {
//        if(s[i]=='\0') break;
//        printf("%c", s[i]);
//    }//putchar(s[i]);
    printf("%s", s);
    puts(s);


    return 0;
}