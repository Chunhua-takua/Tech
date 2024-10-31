/**
 * 06:图像相似度
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#define NUM 100

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int matrix1[NUM][NUM];
    int matrix2[NUM][NUM];
    for (int i = 0; i < m; ++i) 
        for (int j = 0; j < n; ++j)
            scanf("%d", &matrix1[i][j]);
    
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            scanf("%d", &matrix2[i][j]);

    int count = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix1[i][j] == matrix2[i][j])
                ++count;
        }
    }

    // printf("count:%d\n %d\n", count, m * n);
    
    printf("%.2lf", (double) 100 * count / (m * n));

    return 0;
}
