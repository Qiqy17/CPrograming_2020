#include<stdio.h>
#include<string.h>

struct Person {//表结构
    char name[100];
    int age;

};

//void input(struct Person p) {//fail
//    printf("In subfunction input:&p=%x",&p);
//    scanf("%s%d", &p.name, &p.age);
//}
void input(struct Person *p) {
    //scanf("%s%d", &(*p).name, &(*p).age);//ok but ugly
    scanf("%s%d", &p->name, &p->age);
}

void print(struct Person p) {//ok
    printf("%s %d\n", p.name, p.age);
}

int main() {
    struct Person tom = {"tom", 18};
    strcpy(tom.name, "tom");
    //printf("In main function :&tom=%x", &tom);
    tom.age = 5;
    input(&tom);
    ///scanf("%s%d", &tom.name, &tom.age);
    print(tom);

    return 0;
}

