#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

bool isDividableBy17(int n);

int main() {
    // 10:满足条件的数累加
    int m = 50, n = 85;
    scanf("%d%d", &m, &n);

    int sum = 0;

    for (int i = m; i < n + 1; ++i) {
        if (isDividableBy17(i)) {
            sum += i;
        }
    }

    printf("%d", sum);

    return 0;
}

bool isDividableBy17(int n) {
    if (n % 17 == 0) {
        return true;
    }
    return false;
}
