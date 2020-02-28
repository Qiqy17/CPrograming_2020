#include<stdio.h>


int main() {
    int x = 3;
    //x+1=4;
    int *p;//int *p;
    printf("%d\n", *p);//非法访问 运行错误
    p = &x;
    printf("%d\n", *p);

    (*p)++;
    ++*p;
    printf("%d\n", *p);

    return 0;
}