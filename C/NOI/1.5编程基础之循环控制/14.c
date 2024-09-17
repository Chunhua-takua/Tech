#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // 14:人口增长问题
    int x = 13, n = 10;
    scanf("%d%d", &x, &n);

    double result = x;
    for (int i = 0; i < n; ++i) {
        result *= (1 + 0.001); 
    }

    printf("%.4lf", result);

    return 0;
}

