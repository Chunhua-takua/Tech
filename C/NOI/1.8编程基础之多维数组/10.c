/**
 * 10:矩阵转置
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

#define NUM 100

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int matrix1[NUM][NUM];

    for (int i = 0; i < n; ++i) 
        for (int j = 0; j < m; ++j)
            scanf("%d", &matrix1[i][j]);

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ", matrix1[j][i]);
        }
        printf("\n");
    }

    return 0;
}