#include<stdio.h>
#include<math.h>

#define  N 1000

double fa(double x) {
    return 1;
}

double fb(double x) {
    return x;
}

double fc(double x) {
    return x * x;
}

double integrate(double(*f)(double), double a, double b) {
    double dt = (b - a) / N;
    double S = 0;
    int i;
    for (i = 0; i < N; i++) {
        double left = f(a + i * dt);
        double right = f(a + (i + 1) * dt);
        double s = (left + right) * dt / 2;
        S += s;
    }

    return S;
}

int main() {
    printf("%lf\n", integrate(fa, 0, 1));
    printf("%lf\n", integrate(fb, 0, 1));
    printf("%lf\n", integrate(fc, 0, 1));
    printf("%lf\n", integrate(sin, 0, 1));

    return 0;
}

