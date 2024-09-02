#include <stdio.h>
#include <math.h>

const double PI = 3.14159;

int main() {
    // 14:大象喝水
    int h = 23;
    int r = 11;
    scanf("%d%d", &h, &r);

    double v = (double) h * PI * pow(r, 2) / 1000;
    // double n = 20 / v;
    int n = 20 / v + 1;

    printf("%d\n", n); 

    return 0;
}