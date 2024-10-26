/**
 * 03:计算矩阵边缘元素之和
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#define NUM 200

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int matrix[NUM][NUM];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j)
            scanf("%d", &matrix[i][j]);
    }

    int sum = 0;
    if (m == 1) {
        for (int col = 0; col < n; ++col)
            sum += matrix[0][col];
        printf("%d", sum);
        return 0;
    }
    else if (n == 1) {
        for (int line = 0; line < m; ++line) 
            sum += matrix[line][0];
        printf("%d", sum);
        return 0;
    }

    sum = 0 - matrix[0][0] - matrix[0][n - 1] - matrix[m - 1][0] - matrix[m - 1][n - 1];
    // printf("%d\n", sum);
    for (int i = 0; i < n; ++i)
        sum += matrix[0][i] + matrix[m - 1][i];
    // printf("%d\n", sum);
    
    for (int i = 0; i < m; ++i)
        sum += matrix[i][0] + matrix[i][n - 1];

    printf("%d", sum);

    return 0;
}
