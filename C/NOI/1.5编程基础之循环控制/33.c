#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // 33:计算分数加减表达式的值

    int n = 1;
    scanf("%d", &n);

    double sum = 0;
    for (int i = 1; i < n + 1; ++i) {
        if (i % 2 == 1) {
            sum += 1.0 / i;
        }
        else {
            sum -= 1.0 / i;
        }
    }

    printf("%.4lf", sum);

    return 0;
}
