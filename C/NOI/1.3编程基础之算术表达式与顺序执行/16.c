#include <stdio.h>
#include <math.h>

const double PI = 3.14159;

int main() {
    // 16:计算线段长度
    double x_a = 1;
    double y_a = 1;
    double x_b = 2;
    double y_b = 2;
    scanf("%lf%lf%lf%lf", &x_a, &y_a, &x_b, &y_b);

    double d = pow(pow(x_a - x_b, 2) + pow(y_a - y_b, 2), 0.5);

    printf("%.3lf\n", d); 

    return 0;
}