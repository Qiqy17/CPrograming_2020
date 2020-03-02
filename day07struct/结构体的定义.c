#include<stdio.h>
#include<string.h>

struct Person {
    char name[100];
    int age;
};

int main() {
    struct Person tom;
    printf("&tom=%x &tom.name=%x &tom.age=%x\n", &tom, &tom.name, &tom.age);
    scanf("%s%d", tom.name, &tom.age);
    printf("%s %d\n", tom.name, tom.age);
    struct Person *p;
    p = &tom;
    (*p).age++;
    p->age++;
    strcpy(tom.name, "tom cat");
    strcpy(p->name, "tom greater");

    return 0;
}

