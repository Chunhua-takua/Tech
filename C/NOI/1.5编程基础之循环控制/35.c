#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // 35:求出e的值

    int n = 2;
    // scanf("%d", &n);

    double sum = 1;
    double temp = 1;
    for (int i = 1; i < n + 1; ++i) {
        temp *= i;
        sum += 1.0 / temp;
    }

    printf("%.10lf", sum);

    return 0;
}
