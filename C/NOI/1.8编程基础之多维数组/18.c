/**
 * 18:肿瘤面积
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

#define NUM 1000


int main() {
    int n;
    scanf("%d", &n);

    int* m = (int*) malloc(NUM * NUM * sizeof(int));
    bool isFirst = true;
    int i0, j0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &m[i * NUM + j]);

            if (m[i * NUM + j] == 0 && isFirst) {
                i0 = i;
                j0 = j;
                isFirst = false;
            }
        }
    }
    
    int j1 = j0 + 1;
    while (j1 < n && m[i0 * NUM + j1] == 0) {
        ++j1;
    }

    int i2 = i0 + 1;
    while (i2 < n && m[i2 * NUM + j0] == 0)
        ++i2;

    printf("%d", (j1 - j0 - 2) * (i2 - i0 - 2));

    return 0;
}
