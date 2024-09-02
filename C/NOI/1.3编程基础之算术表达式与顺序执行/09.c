#include <stdio.h>
#include <math.h>

const double PI = 3.14159;

int main() {
    // 09:与圆相关的计算
    double r = 3.0;
    scanf("%lf", &r);

    double d = 2 * r;
    double c = PI * d;
    double s = PI * pow(r, 2);


    printf("%.4lf %.4lf %.4lf\n", d, c, s);

    return 0;
}