#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // 06:整数序列的元素最大跨度值
    int n = 4;
    scanf("%d", &n);

    int max = -1;
    int min = 1001;

    for (int i = 0; i < n; ++i) {
        int temp;
        scanf("%d", &temp);
        max = max > temp ? max : temp;
        min = min < temp ? min : temp;
    }

    printf("%d", max - min);

    return 0;
}