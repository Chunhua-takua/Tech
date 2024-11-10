/**
 * 13:图像模糊处理
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

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1)   
                matrix2[i][j] = matrix1[i][j];
            else {
                int temp =  round((matrix1[i][j] + matrix1[i][j - 1] + matrix1[i][j + 1] + matrix1[i - 1][j] + matrix1[i + 1][j]) / 5.0);
                matrix2[i][j] = temp;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    return 0;
}