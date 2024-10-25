/**
 * 02:同行列对角线的格子
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#define NUM 5

void print(int x, int y);

int main() {
    int n, i, j;
    scanf("%d %d %d", &n, &i, &j);

    // 行
    for (int k = 1; k <= n; ++k) {
        print(i, k);
    }
    printf("\n");

    // 列
    for (int k = 1; k <= n; ++k)
        print(k, j);
    printf("\n");

    // 反对角线
    int difference = j - i;
    for (int k = 1; k <= n; ++k) {
        int col = difference + k;
        if (col >= 1 && col <= n) 
            print(k, col);
    }
    printf("\n");

    // 对角线
    int line = i;
    int col = j;
    while (line < n && col > 1) {
        ++line;
        --col;
    }
    while (line >= 1 && col <= n) {
        print(line, col);
        --line;
        ++col;
    }

    return 0;
}

void print(int x, int y) {
    printf("(%d,%d) ", x, y);
}
