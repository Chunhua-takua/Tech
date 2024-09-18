#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // 18:鸡尾酒疗法
    int n = 1;
    scanf("%d", &n);

    double r_cocktail = 0;
    for (int i = 0; i < n; ++i) {
        int cases;
        int effect_cases;
        scanf("%d%d", &cases, &effect_cases);

        double r = (double) effect_cases / cases;
        if (i == 0) {
            r_cocktail = r;
            continue;
        }

        if (r - r_cocktail > 0.05) {
            printf("better\n");
        }
        else if (r_cocktail - r > 0.05) {
            printf("worse\n");
        }
        else {
            printf("same\n");
        }
    }

    return 0;
}

