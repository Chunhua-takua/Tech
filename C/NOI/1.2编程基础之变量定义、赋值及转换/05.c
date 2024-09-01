#include <stdio.h>
#include <stdbool.h>

int main() {
    // 05:填空：类型转换2

    // float 小数点前后加起来有效数字只有 6 位，当给定的 float 有效数在 6 位以内转换为字符不会丢失精度，当有效位数大于 6 位就会存在精度丢失；
    // double 小数前后加起来的有效数字只有 16 位，当给定的 double 有效数在 16 位以内转换为字符串不会丢失精度，当有效位数大于 16 位存在精度丢失；

    double a;
    float b;

    a = 1.000000011;
    b = a;
    printf("%.9f %.9f\n", a, b);

    printf("F E\n");

    return 0;
}