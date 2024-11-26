/**
 * 05:最大值和最小值的差
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

#define MAX 20000

int main() {
    int m;
    scanf("%d", &m);

    int sum = 0;
    int max = -MAX;
    int min = MAX;

    for (int i = 0; i < m; ++i) {
        int temp;
        scanf("%d", &temp);
        max = max < temp ? temp : max;
        min = min > temp ? temp : min;
    }

    printf("%d", max - min);

    return 0;
}
