#include <stdio.h>
#include <math.h>

int main() {
    // 07:计算多项式的值
    double x = 2.31;
    double a = 1.2;
    double b = 2;
    double c = 2;
    double d = 3;
    scanf("%lf%lf%lf%lf%lf", &x, &a, &b, &c, &d);

    double r = a * pow(x, 3) + b * pow(x, 2) + c * x + d;


    printf("%.7lf\n", r);

    return 0;
}