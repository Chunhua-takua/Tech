/**
 * 15:细菌的繁殖与扩散
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

#define NUM 9

void update(int m1[NUM][NUM], int m2[NUM][NUM]);
void copy(int m1[NUM][NUM], int m2[NUM][NUM]);

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int m1[NUM][NUM];
    int m2[NUM][NUM];
    for (int i = 0; i < NUM; ++i)
        for (int j = 0; j < NUM; ++j)
            m1[i][j] = m2[i][j] = 0;

    m1[4][4] = m;
    for (int i = 0; i < n; ++i) {
        update(m1, m2);
        copy(m1, m2);
    }

    for (int i = 0; i < NUM; ++i) {
        for (int j = 0; j < NUM; ++j) {
            printf("%d ", m1[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void update(int m1[NUM][NUM], int m2[NUM][NUM]) {
    for (int i = 0; i < NUM; ++i) {
        for (int j = 0; j < NUM; ++j) {
            int temp = m1[i][j] * 2;
            if (i - 1 >= 0 && j - 1 >= 0)
                temp += m1[i - 1][j - 1];
            if (i - 1 >= 0)
                temp += m1[i - 1][j];
            if (i - 1 >= 0 && j + 1 < NUM)
                temp += m1[i - 1][j + 1];
            if (j - 1 >= 0)
                temp += m1[i][j - 1];
            if (j + 1 < NUM)
                temp += m1[i][j + 1];
            if (i + 1 < NUM && j - 1 >= 0)
                temp += m1[i + 1][j - 1];
            if (i + 1 < NUM)
                temp += m1[i + 1][j];
            if (i + 1 < NUM && j + 1 < NUM)
                temp += m1[i + 1][j + 1];

            m2[i][j] = temp;    
        }
    }
}

// m2 to m1
void copy(int m1[NUM][NUM], int m2[NUM][NUM]) {
    for (int i = 0; i < NUM; ++i)
        for (int j = 0; j < NUM; ++j)
            m1[i][j] = m2[i][j];
}