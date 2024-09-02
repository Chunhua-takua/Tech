#include <stdio.h>
#include <math.h>

int main() {
    // 10:计算并联电阻的阻值
    float r1 = 1;
    float r2 = 2;
    scanf("%f%f", &r1, &r2);

    float r = 1.0 / (1 / r1 + 1 / r2);

    printf("%.2f\n", r);

    return 0;
}