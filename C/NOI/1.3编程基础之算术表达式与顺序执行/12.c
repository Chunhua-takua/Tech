#include <stdio.h>
#include <math.h>

const double PI = 3.14;

int main() {
    // 12:计算球的体积
    double r = 4;
    scanf("%lf", &r);

    // int time = a / b;
    double v = (4.0 / 3) * PI * pow(r, 3);

    printf("%.2lf\n", v); 

    return 0;
}