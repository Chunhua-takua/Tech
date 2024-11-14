/**
 * 19:肿瘤检测
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

#define MAX 100

bool isEdge(int matrix[MAX][MAX], int n, int i, int j);

int main() {
    int n;
    scanf("%d", &n);

    int matrix[MAX][MAX];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            scanf("%d", &matrix[i][j]);

    int space = 0;
    int circumference = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] <= 50) {
                ++space;
                if (isEdge(matrix, n, i, j))
                    ++circumference;

            }
        }
    }

    printf("%d %d", space, circumference);

    return 0;
}

// 任何在肿瘤上的点，如果它是图像的边界或者它的上下左右四个相邻点中至少有一个是非肿瘤上的点，则该点称为肿瘤的边界点
bool isEdge(int matrix[MAX][MAX], int n, int i, int j) {
    if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
        return true;

    if (j - 1 >= 0 && matrix[i][j - 1] > 50
        || j + 1 < n && matrix[i][j + 1] > 50
        || i - 1 >= 0 && matrix[i - 1][j] > 50
        || i + 1 < n && matrix[i + 1][j] > 50) {
            return true;
    }

    return false;
}