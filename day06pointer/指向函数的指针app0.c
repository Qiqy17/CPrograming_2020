#include<stdio.h>
#include<math.h>

#define  N 1000


double integrate(double a, double b) {
    double dt = (b - a) / N;
    double S = 0;
    int i;
    for (i = 0; i < N; i++) {
        double left = sin(a + i * dt);
        double right = sin(a + (i + 1) * dt);
        double s = (left + right) * dt / 2;
        S += s;

    }

    return S;
}

int main() {
    printf("%lf\n", integrate(0, 1));
    return 0;
}

