#include<stdio.h>
#include<math.h>

int root2(double a, double b, double c, double *x1, double *x2) {
    double dt = b * b - 4 * a * c;
    if (dt < 0)
        return 0;
    *x1 = (-b + sqrt(dt)) / (2 * a);
    *x2 = c / a / (*x1);
    return 1;

}

int main() {
    double a = 1, b = -1, c = -6;
    double x1, x2;
    while (3 == scanf("%lf%lf%lf", &a, &b, &c)) {
        if (root2(a, b, c, &x1, &x2)) {
            printf("%f %f\n", x1, x2);
        } else {
            printf("No solutions!\n");
        }
    }

    // printf("x1=%f x2=%f\n", x1, x2);
    return 0;
}