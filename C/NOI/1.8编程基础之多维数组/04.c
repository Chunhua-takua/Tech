/**
 * 04:错误探测
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#define NUM 200

bool isEven(int num);

int main() {
    int n;
    scanf("%d", &n);

    int matrix[NUM][NUM];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j)
            scanf("%d", &matrix[i][j]);
    }

    int sum = 0;
    int count = 0;
    int x = 0;
    int y = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            sum += matrix[i][j];
        }
        if (!isEven(sum)) {
            ++count;
            x = i;
        }
        sum = 0;

        if (count > 1) {
            printf("Corrupt");
            return 0;
        }
    }

    sum = 0;
    count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            sum += matrix[j][i];
        }
        if (!isEven(sum)) {
            ++count;
            y = i;
        }
        sum = 0;

        if (count > 1) {
            printf("Corrupt");
            return 0;
        }
    }

    if (count == 0) {
        printf("OK");
    }
    else {
        printf("%d %d", x + 1, y + 1);
    }   

    return 0;
}

bool isEven(int num) {
    if (num % 2 == 0)
        return true;
    return false;
}