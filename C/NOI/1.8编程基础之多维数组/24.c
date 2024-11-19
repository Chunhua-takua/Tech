/**
 * 24:蛇形填充数组
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

#define MAX 100


int main() {
    int n;
    scanf("%d", &n);

    int m[MAX][MAX];

    int x = 0;
    int y = 0;
    bool direction = true; // to right-top
    for (int i = 1; i <= n * n; ++i) {
        m[x][y] = i;

        if (direction) {
            // to right-top
            if (x == 0 && y < n - 1) {
                ++y;
                direction = false;
            }
            else if (y == n - 1) {
                ++x;
                direction = false;
            }
            else {
                --x;
                ++y;
            }
        }
        else {
            // to left-down
            if (x < n - 1 && y == 0) {
                ++x;
                direction = true;
            }
            else if (x == n - 1) {
                ++y;
                direction = true;
            }
            else {
                ++x;
                --y;
            }
        }

    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }


    return 0;
}