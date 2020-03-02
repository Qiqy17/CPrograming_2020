#include<stdio.h>
#include<assert.h>

int add(int a, int b) {


    return a * b;
}

int main() {
    assert(5 == add(2, 3));
    assert(4 == add(2, 2));
    assert(0 == add(0, 0));

    return 0;
}



