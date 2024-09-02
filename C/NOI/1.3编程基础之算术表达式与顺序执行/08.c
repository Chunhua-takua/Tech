#include <stdio.h>
#include <math.h>

int main() {
    // 08:温度表达转化
    double f = 41;
    scanf("%lf", &f);

    double c = 5 * (f - 32) / 9;


    printf("%.5lf\n", c);

    return 0;
}