/**
 * 17:最好的草
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

#define NUM 100

// above and left
int countGrass(char m[NUM][NUM], int r, int c, int x, int y);

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    char m[NUM][NUM];
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j) {
            char temp = getchar();
            if (temp == '\n') 
                temp = getchar();
            m[i][j] = temp;
        }

    int count = 0;
    // for (int col = 0; col < c; ++col) {
    //     if (m[0][col] == '#')
    //         ++count;
    // }

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (m[i][j] == '.')
                continue;

            if (m[i][j] == '#') {
                if (countGrass(m, r, c, i, j) == 0)
                    ++count;
            }
        }
    }
    printf("%d", count);

    return 0;
}

int countGrass(char m[NUM][NUM], int r, int c, int x, int y) {
    int count = 0;
    if (x - 1 >= 0 && m[x - 1][y] == '#')
        ++count;
    if (y - 1 >= 0 && m[x][y - 1] == '#')
        ++count;
    return count;
}