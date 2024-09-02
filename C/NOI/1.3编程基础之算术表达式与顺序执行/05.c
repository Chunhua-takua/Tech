#include <stdio.h>

int main() {
    // 05:计算分数的浮点数值
    int a = 5;
    int b = 7;
    scanf("%d%d", &a, &b);

    double r = (double) a / b;
    printf("%.9lf\n", r);

    return 0;
}