/**
 * 20:反反复复
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

#define MAX 200


int main() {
    int col;
    scanf("%d", &col);

    char str[MAX];
    scanf("%s", str);
    
    int row = strlen(str) / col;

    char m[MAX][MAX];
    for (int i = 0; i < row; ++i)
        for (int j = 0; j < col; ++j) {
            if (i % 2 == 0)
                m[i][j] = str[i * col + j];
            else 
                m[i][col - j - 1] = str[i * col + j];
        }
            

    for (int i = 0; i < col; ++i) {
        for (int j = 0; j < row; ++j)
            printf("%c", m[j][i]);
    }

    // printf("%d", strlen(str));
    return 0;
}
