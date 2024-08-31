#include <stdio.h>

int main() {
    int x, a, y, b;
    scanf("%d%d%d%d", &x, &a, &y, &b);
    double n = (double)(x * a - y * b) / (a - b);
    printf("%.2lf\n", n); // double 使用 lf
    return 0;
}