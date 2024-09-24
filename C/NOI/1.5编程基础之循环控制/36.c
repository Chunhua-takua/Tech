#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // 36:计算多项式的值

    float x = 2.0;
    int n = 4;
    scanf("%f%d", &x, &n);

    double sum = 0;
    double temp = 1;
    for (int i = 0; i < n + 1; ++i) {
        if (i == 0) {
            sum += 1;
            continue;
        }

        temp *= x;
        // printf("%.2lf\n", temp);
        sum += temp;
    }

    printf("%.2lf", sum);

    return 0;
}
