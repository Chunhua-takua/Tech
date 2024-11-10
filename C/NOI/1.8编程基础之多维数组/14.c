/**
 * 14:扫雷游戏地雷数计算
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

#define NUM 100

int count(int matrix[][NUM], int row, int col, int x, int y);

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int matrix[NUM][NUM];

    for (int i = 0; i < n; ++i) 
        for (int j = 0; j < m; ++j) {
            char ch = getchar();
            // printf("ch:%c, ", ch);
            if (ch == '\n') {
                ch = getchar();
            }
            matrix[i][j] = ch;             
        }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (matrix[i][j] == '*')
                printf("*");
            else {
                printf("%d", count(matrix, n, m, i, j));
            }
        }
        printf("\n");
    }

    return 0;
}

int count(int matrix[][NUM], int row, int col, int x, int y) {
    int count = 0;
    if (x - 1 >= 0 && y - 1 >= 0 && matrix[x - 1][y - 1] == '*')
        ++count;
    if (x - 1 >= 0 && matrix[x - 1][y] == '*')
        ++count;
    if (x - 1 >= 0 && y + 1 < col && matrix[x - 1][y + 1] == '*') 
        ++count;
    if (y - 1 >= 0 && matrix[x][y - 1] == '*')
        ++count;
    if (y + 1 < col && matrix[x][y + 1] == '*')
        ++count;
    if (x + 1 < row && y - 1 >= 0 && matrix[x + 1][y - 1] == '*')
        ++count;
    if (x + 1 < row && matrix[x + 1][y] == '*')
        ++count;
    if (x + 1 < row && y + 1 < col && matrix[x + 1][y + 1] == '*') 
        ++count;

    return count;
}