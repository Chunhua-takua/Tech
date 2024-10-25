/**
 * 01:矩阵交换行
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#define NUM 5

int main() {
    int matrix[NUM][NUM];
    int m, n;
    for (int i = 0; i < NUM; ++i) {
        for (int j = 0; j < NUM; ++j)
            scanf("%d", &matrix[i][j]);
    }
    scanf("%d %d", &m, &n);

    for (int i = 0; i < NUM; ++i) {
        int temp = matrix[m - 1][i];
        matrix[m - 1][i] = matrix[n - 1][i];
        matrix[n - 1][i] = temp;
    }


    for (int i = 0; i < NUM; ++i) {
        for (int j = 0; j < NUM; ++j)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
    return 0;
}


