#include<stdio.h>
//#include<string.h>

int strcmp(char s[], char t[]) {
    int i;
    for (i = 0; s[i] != '\0' || t[i] != '\0'; ++i) {
        if (s[i] != t[i])
            return s[i] - t[i];
    }
    return 0;
}

int main() {
    printf("%d\n", strcmp("apple", "banana"));// a<b
    printf("%d\n", strcmp("kiwi", "banana")); // a>b
    printf("%d\n", strcmp("apple", "apples"));// a<b
    printf("%d\n", strcmp("apple", "apple")); // a==b
    return 0;
}