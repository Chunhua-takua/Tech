#include <stdio.h>
#include <math.h>

const double PI = 3.14159;

int main() {
    // 17:计算三角形面积
    float x1 = 0;
    float y1 = 0;
    float x2 = 4;
    float y2 = 0;
    float x3 = 0;
    float y3 = 3;
    scanf("%f%f%f%f%f%f", &x1, &y1, &x2, &y2, &x3, &y3);

    double s = 0.5 * abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));

    printf("%.2f\n", s); 

    return 0;
}