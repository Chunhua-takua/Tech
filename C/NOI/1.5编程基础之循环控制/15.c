#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // 15:银行利息
    int r = 5, m = 5000;
    int y = 4;
    scanf("%d%d%d", &r, &m, &y);

    double result = m;
    for (int i = 0; i < y; ++i) {
        result *= 1.0 + (double) r / 100; 
    }

    printf("%.0lf", floor(result));

    return 0;
}

