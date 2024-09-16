#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // 07:奥运奖牌计数
    int n = 4;
    scanf("%d", &n);

    int gold = 0;
    int silver = 0;
    int bronze = 0;

    for (int i = 0; i < n; ++i) {
        int t1, t2, t3;
        scanf("%d%d%d", &t1, &t2, &t3);
        gold += t1;
        silver += t2;
        bronze += t3;
    }

    printf("%d %d %d %d", gold, silver, bronze, gold + silver + bronze);

    return 0;
}