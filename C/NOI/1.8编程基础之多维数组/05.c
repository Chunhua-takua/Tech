/**
 * 05:计算鞍点
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#define NUM 5

int main() {
    int matrix[NUM][NUM];
    for (int i = 0; i < NUM; ++i) 
        for (int j = 0; j < NUM; ++j)
            scanf("%d", &matrix[i][j]);

    int x, y;
    for (int i = 0; i < NUM; ++i) {
        int max = matrix[i][0];
        x = i;
        y = 0;

        // find max of line i
        for (int j = 1; j < NUM; ++j) {
            if (max < matrix[i][j]) {
                max = matrix[i][j];
                y = j;
            }
        }

        // judge whether (x,y,max) is the min of col y
        int line;
        for (line = 0; line < NUM; ++line) {
            if (max > matrix[line][y]) {
                break;
            }
        }
        // printf("line:%d\n", line);
        
        if (line == NUM) {
            printf("%d %d %d", x + 1, y + 1, max);
            return 0;
        }
    }

    printf("not found");

    return 0;
}
