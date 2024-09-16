#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // 08:多边形内角和
    int n = 4;
    scanf("%d", &n);

    int sum = 180 * (n - 2);

    for (int i = 0; i < n - 1; ++i) {
        int t;
        scanf("%d", &t);
        sum -= t;
    }

    printf("%d", sum);

    return 0;
}