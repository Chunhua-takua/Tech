#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

bool isOdd(int n) {
    if (n % 2 == 1) {
        return true;
    }
    return false;
}

int main() {
    // 09:奇数求和
    int m = 7, n = 15;
    scanf("%d%d", &m, &n);

    int sum = 0;

    for (int i = m; i < n + 1; ++i) {
        if (isOdd(i)) {
            sum += i;
        }
    }

    printf("%d", sum);

    return 0;
}