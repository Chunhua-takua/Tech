/**
 * 12:变幻的矩阵
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

#define NUM 100
bool isClockwise(char matrix1[][NUM], char matrix2[][NUM], int n);
bool isCounterClockwise(char matrix1[][NUM], char matrix2[][NUM], int n);
bool isCenterSymmentric(char matrix1[][NUM], char matrix2[][NUM], int n);
bool isSame(char matrix1[][NUM], char matrix2[][NUM], int n);

int main() {
    int n;
    scanf("%d ", &n);
    char matrix1[NUM][NUM];
    char matrix2[NUM][NUM];

    for (int i = 0; i < n; ++i) 
        for (int j = 0; j < n; ++j) {
            scanf("%c ", &matrix1[i][j]);
            // printf("read, m1:%c\n", matrix1[i][j]);
        }
            

    for (int i = 0; i < n; ++i) 
        for (int j = 0; j < n; ++j) {
            if (i == n - 1 && j == n - 1) {
                scanf("%c", &matrix2[i][j]);
                break;
            }
            scanf("%c ", &matrix2[i][j]);
            // printf("read, m2:%c\n", matrix2[i][j]);
        }

    if (isClockwise(matrix1, matrix2, n))
        printf("1");
    else if (isCounterClockwise(matrix1, matrix2, n))
        printf("2");
    else if (isCenterSymmentric(matrix1, matrix2, n))
        printf("3");
    else if (isSame(matrix1, matrix2, n))
        printf("4");
    else 
        printf("5");

    return 0;
}

bool isClockwise(char matrix1[][NUM], char matrix2[][NUM], int n) {
    // printf("in isClockwise\n");
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j) {
            if (matrix1[i][j] != matrix2[j][n - 1 - i])
                return false;
        }

    return true;
}

bool isCounterClockwise(char matrix1[][NUM], char matrix2[][NUM], int n) {
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (matrix1[i][j] != matrix2[n - 1 - j][i])
                return false;
        
    return true;
}

bool isCenterSymmentric(char matrix1[][NUM], char matrix2[][NUM], int n) {
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j) 
            if (matrix1[i][j] != matrix2[n - 1 - i][n - 1 - j]) {
                return false;
            }
    return true;
}

bool isSame(char matrix1[][NUM], char matrix2[][NUM], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix1[i][j] != matrix2[i][j])
                return false;
        }
    }
    return true;
}