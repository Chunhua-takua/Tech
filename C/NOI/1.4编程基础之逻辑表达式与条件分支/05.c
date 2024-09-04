#include <stdio.h>
// #include <math.h>
// #include <string.h>

int main() {
    // 05:整数大小比较
    // 0 <= x < 2^32, -2^31 <= y < 2^31
    long long x = 1000;
    long long y = -10000;
    scanf("%lld%lld", &x, &y);

    if (x > y) {
        printf(">\n");
    }
    else if (x == y) {
        printf("=\n");
    }
    else {
        printf("<\n");
    }

    return 0;
}