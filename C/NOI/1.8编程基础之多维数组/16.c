/**
 * 16:矩阵剪刀石头布
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

#define NUM 100

void update(char m1[NUM][NUM], char m2[NUM][NUM], int r, int c);
void copy(char m1[NUM][NUM], char m2[NUM][NUM], int r, int c);

int main() {
    int r, c, n;
    scanf("%d %d %d", &r, &c, &n);

    char m1[NUM][NUM];
    char m2[NUM][NUM];
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j) {
            char temp = getchar();
            if (temp == '\n') 
                temp = getchar();
            m1[i][j] = temp;
        }

    while (n > 0) {
        update(m1, m2, r, c);
        copy(m1, m2, r, c);
        --n;
    }

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            printf("%c", m1[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/**
 * RRR
 * RSR
 * RRR
 */
void update(char m1[NUM][NUM], char m2[NUM][NUM], int r, int c) {
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            // Rock
            if (m1[i][j] == 'R') {
                if (j - 1 >= 0 && m1[i][j - 1] == 'P'
                    || j + 1 < c && m1[i][j + 1] == 'P'
                    || i - 1 >= 0 && m1[i - 1][j] == 'P'
                    || i + 1 < r && m1[i + 1][j] == 'P')
                    m2[i][j] = 'P';
                else
                    m2[i][j] = m1[i][j];
            }
            else if (m1[i][j] == 'S') {
                if (j - 1 >= 0 && m1[i][j - 1] == 'R'
                    || j + 1 < c && m1[i][j + 1] == 'R'
                    || i - 1 >= 0 && m1[i - 1][j] == 'R'
                    || i + 1 < r && m1[i + 1][j] == 'R')
                    m2[i][j] = 'R';
                else
                    m2[i][j] = m1[i][j];
            }
            else if (m1[i][j] == 'P') {
                if (j - 1 >= 0 && m1[i][j - 1] == 'S'
                    || j + 1 < c && m1[i][j + 1] == 'S'
                    || i - 1 >= 0 && m1[i - 1][j] == 'S'
                    || i + 1 < r && m1[i + 1][j] == 'S')
                    m2[i][j] = 'S';
                else
                    m2[i][j] = m1[i][j];
            }
            
            // printf("m1ij: %c, m2ij: %c\n", m1[i][j], m2[i][j]);
        }
    }
}

// m2 to m1
void copy(char m1[NUM][NUM], char m2[NUM][NUM], int r, int c) {
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            m1[i][j] = m2[i][j];
}