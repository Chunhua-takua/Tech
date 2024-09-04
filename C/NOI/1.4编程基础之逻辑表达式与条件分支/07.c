#include <stdio.h>
// #include <math.h>
// #include <string.h>

int main() {
    // 07:收集瓶盖赢大奖
    int nx = 9;
    int ng = 19;
    scanf("%d%d", &nx, &ng);

    if (nx >= 10 || ng >= 20) {
        printf("1\n");
    }
    else {
        printf("0\n");
    }

    return 0;
}