/**
 * 09:矩阵乘法
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

#define NUM 100

int main() {
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);

    int matrix1[NUM][NUM];
    int matrix2[NUM][NUM];
    int c[NUM][NUM];

    for (int i = 0; i < n; ++i) 
        for (int j = 0; j < m; ++j)
            scanf("%d", &matrix1[i][j]);

    for (int i = 0; i < m; ++i) 
        for (int j = 0; j < k; ++j)
            scanf("%d", &matrix2[i][j]);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < k; ++j) {
            int temp = 0;
            for (int t = 0; t < m; ++t) {
                temp += matrix1[i][t] * matrix2[t][j];
            }
            printf("%d ", temp);
        }
        printf("\n");
    }

    return 0;
}