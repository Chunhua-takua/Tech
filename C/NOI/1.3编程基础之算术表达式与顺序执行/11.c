#include <stdio.h>
#include <math.h>

int main() {
    // 11:计算浮点数相除的余数
    double a = 73.263;
    double b = 0.9973;
    scanf("%lf%lf", &a, &b);

    int time = a / b;
    double r = a - time * b;

    // %g 输出时小数尾部没有多余的0
    printf("%g\n", r); 

    return 0;
}