/**
 * 08:矩阵加法
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
    int matrix2[NUM][NUM];
    for (int i = 0; i < n; ++i) 
        for (int j = 0; j < m; ++j)
            scanf("%d", &matrix1[i][j]);

    for (int i = 0; i < n; ++i) 
        for (int j = 0; j < m; ++j)
            scanf("%d", &matrix2[i][j]);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int temp = matrix1[i][j] + matrix2[i][j];
            printf("%d ", temp);
        }
        printf("\n");
    }

    return 0;
}