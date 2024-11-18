/**
 * 23:二维数组回形遍历
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
    int direction = 0;
    int margin_top = 0;
    int margin_bottom = row - 1;
    int margin_left = 0;
    int margin_right = col - 1;

    for (int i = 0; i < row * col; ++i) {
        switch (direction) {
            case 0: // right
                if (y < margin_right) {
                    printf("%d\n", m[x][y]);
                    ++y;
                }
                if (y == margin_right) {
                    printf("%d\n", m[x][y]);
                    direction = 1;
                    margin_right--;
                    ++x;
                }
                break;
            case 1: // down
                if (x < margin_bottom) {
                    printf("%d\n", m[x][y]);
                    ++x;
                }
                if (x == margin_bottom) {
                    printf("%d\n", m[x][y]);
                    direction = 2;
                    margin_bottom--;
                    --y;
                }
                break;
            case 2: // left
                if (y > margin_left) {
                    printf("%d\n", m[x][y]);
                    y--;
                }
                if (y == margin_left) {
                    printf("%d\n", m[x][y]);
                    direction = 3;
                    margin_left++;
                    --x;
                }
                break;
            case 3: // up
                if (x > margin_top) {
                    printf("%d\n", m[x][y]);
                    x--;
                }
                if (x == margin_top) {
                    printf("%d\n", m[x][y]);
                    direction = 0;
                    margin_top++;
                    ++y;
                }
                break;
        }
    }

    return 0;
}
