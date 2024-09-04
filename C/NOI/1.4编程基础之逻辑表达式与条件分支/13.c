#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    // 13:分段函数
    float x = 120;
    scanf("%f", &x);

    float r;
    if (0 <= x && x < 5) {
        r = -x + 2.5;
    }
    else if (x < 10) {
        r = 2 - 1.5 * (x - 3) * (x - 3);
    }
    else if (x < 20) {
        r = x / 2 - 1.5;
    }
    printf("%.3f", r);

    return 0;
}