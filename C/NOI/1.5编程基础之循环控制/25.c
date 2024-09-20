#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

bool isSPNormal(int n);
bool isDPNormal(int n);

int main() {
    // 25:求特殊自然数

    int a, b, c;
    for (a = 1; a <= 6; ++a) {
        for (b = 0; b <= 6; ++b) {
            for (c = 1; c <= 6; ++c) {
                if (a * 49 + b * 7 + c == c * 81 + b * 9 + a) {
                    printf("%d\n", a * 49 + b * 7 + c);
                    printf("%d%d%d\n", a, b, c);
                    printf("%d%d%d\n", c, b, a);
                }
            }
        }
    }

    return 0;
}
