#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // 37:雇佣兵

    // tili
    int m = 5;
    
    // zhanli
    int n = 2;

    // elements
    int x = 3;
    scanf("%d%d%d", &m, &n, &x);

    int tempTili = 0;
    int tempZhanli = n;
    int maxZhanli = n;
    int zhanli0 = n;
    while (x >= 0) {
        if (tempTili < m) {
            --x;
            tempTili += tempZhanli;
            continue;
        }

        tempTili = m;
        // printf("tempTili=%d\n", tempTili);

        for (int i = 1; i < m + 1; ++i) {
            // printf("i=%d;tempZhanli=%d\n", i, tempZhanli);
            if (i % zhanli0 == 0) {
                ++tempZhanli;
            }

        }
        tempTili = 0;

        zhanli0 = tempZhanli;

        maxZhanli = maxZhanli > tempZhanli ? maxZhanli : tempZhanli;
    }

    printf("%d", maxZhanli);

    return 0;
}
