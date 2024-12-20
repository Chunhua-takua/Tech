/**
 * 14:铺地毯
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

#define MAX 10000

int blankets[MAX][4];

bool isOnBlanket(int blanket[4], int x, int y);

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        scanf("%d%d%d%d", &blankets[i][0], &blankets[i][1], &blankets[i][2], &blankets[i][3]);
    }

    int x, y;
    scanf("%d%d", &x, &y);

    for (int i = n - 1; i >= 0; --i) {
        if (isOnBlanket(blankets[i], x, y)) {
            printf("%d", i + 1);
            return 0;
        }
    }

    printf("-1");

    return 0;
}

bool isOnBlanket(int blanket[4], int x, int y) {
    if (x >= blanket[0] && x <= blanket[0] + blanket[2]
        && y >= blanket[1] && y <= blanket[1] + blanket[3])
        return true;
    return false;
}