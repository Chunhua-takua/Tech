/**
 * 22:神奇的幻方
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

#define MAX 100

void update(int *x, int *y, int matrix[MAX][MAX], int order);

int main() {
    int n;
    scanf("%d", &n);

    int order = 2 * n - 1;

    int matrix[MAX][MAX];
    for (int i = 0; i < order; ++i)
        for (int j = 0; j < order; ++j)
            matrix[i][j] = 0;

    int x = 0;
    int y = n - 1;
    for (int i = 1; i <= order * order; ++i) {
        // printf("x:%d, y:%d\n", x, y);
        matrix[x][y] = i;
        update(&x, &y, matrix, order);
    }

    for (int i = 0; i < order; ++i) {
        for (int j = 0; j < order; ++j)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }

    return 0;
}

void update(int *x, int *y, int matrix[MAX][MAX], int order) {
    if (*x == 0 && *y == order - 1 || *x - 1 >= 0 && *y + 1 < order && matrix[*x - 1][*y + 1] != 0) {
        *x = *x + 1;
    }
    else if (*x == 0) {
        *x = order - 1;
        *y = *y + 1;
    }
    else if (*y == order - 1) {
        *x = *x - 1;
        *y = 0;
    }
    else {
        *x = *x - 1;
        *y = *y + 1;
    }
}
