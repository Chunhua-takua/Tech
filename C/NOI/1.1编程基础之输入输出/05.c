#include <stdio.h>

int main() {
    // 输出保留12位小数的浮点数
    double a;
    // double a = 3.1415926535798932;
    scanf("%lf", &a);
    
    printf("%.12lf\n", a);
    return 0;
}