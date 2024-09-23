#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // 34:求阶乘的和

    int n = 5;
    scanf("%d", &n);

    int sum = 0;
    int temp = 1;
    for (int i = 1; i < n + 1; ++i) {
        temp *= i;
        sum += temp;
    }

    printf("%d", sum);

    return 0;
}
