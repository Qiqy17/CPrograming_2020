#include<stdio.h>
#include<assert.h>

struct Fraction {
    int up, down;

};


void input(struct Fraction *);

void print(struct Fraction *);

void simplify(struct Fraction *);

void add(struct Fraction a, struct Fraction b, struct Fraction *c);

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }

int main() {
    int S = 0;
    for (int i = 1; i <= 10; i++) {
        S += i;

    }
    printf("%d\n");
    return 0;
}

void add(struct Fraction a, struct Fraction b, struct Fraction *c) {
    c->up = a.up * b.down + b.up * a.down;
    c->down = a.down * b.down;
    simplify(c);
}

void simplify(struct Fraction *f) {
    int g = gcd(f->up, f->down);
    f->up /= g;
    f->down /= g;
}

void print(struct Fraction *f) {
    printf("%d/%d", f->up, f->down);
}

void input(struct Fraction *f) {
    scanf("%d %d", &f->up, &f->down);
    simplify(f);

}

