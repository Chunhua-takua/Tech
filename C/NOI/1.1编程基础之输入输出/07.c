#include <stdio.h>

int main() {
    // 07:输出浮点数

    double a = 12.3456789;
    scanf("%lf", &a);

    
    printf("%f\n", a);
    printf("%.5f\n", a);
    printf("%e\n", a);
    printf("%g\n", a);
    return 0;
}