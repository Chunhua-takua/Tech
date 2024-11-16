/**
 * 21:二维数组右上左下遍历
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

#define MAX 100


int main() {
    int row, col;
    scanf("%d %d", &row, &col);

    int m[MAX][MAX];
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            scanf("%d", &m[i][j]);
        }
    }

    int x = 0;
    int y = 0;
    while (y < col) {
        for (int i = x, j = y; i < row && j >= 0; ++i, --j) {
            printf("%d\n", m[i][j]);
        }

        ++y;
    }

    while (x < row) {
        for (int i = x + 1, j = y - 1; i < row && j >= 0; ++i, --j)
            printf("%d\n", m[i][j]);

        ++x;
    }


    return 0;
}
