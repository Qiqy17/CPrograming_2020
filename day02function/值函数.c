#include<stdio.h>
void foo(int x)//pass by value
{
    printf("in function foo: &x=%x\n",&x);
    x++;
}
int main() {
    int x=3;
    printf("in function main: &x=%x\n",&x);
    foo(x);
    printf("x=%d\n",x);
    return 0;
}