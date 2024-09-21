#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // 28:分离整数的各个数位

    int k = 1;
    scanf("%d", &k);

    while (k > 0) {
        int temp = k % 10;
        k /= 10;
        printf("%d ", temp);
    }

    // printf("%d", n);
    return 0;
}
