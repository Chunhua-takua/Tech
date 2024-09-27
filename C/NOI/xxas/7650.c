// 7650:不定方程求解
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int a = 2;
    int b = 3;
    int c = 18;
    scanf("%d%d%d", &a, &b, &c);

    int count = 0;
    for (int x = 0; x <= c / a; ++x) {
        for (int y = 0; y <= c / b; ++y) {
            if (a * x + b * y == c) {
                ++count;
            }
        }
    }

    printf("%d", count);

    return 0;
}