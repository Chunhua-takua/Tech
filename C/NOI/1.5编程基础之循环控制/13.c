#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // 13:乘方计算
    int a, n;
    scanf("%d%d", &a, &n);

    if (a == 0) {
        printf("0");
        return 0;
    }

    int result = a;
    for (int i = 0; i < n - 1; ++i) {
        result *= a; 
    }

    printf("%d", result);

    return 0;
}

