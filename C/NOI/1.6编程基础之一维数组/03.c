// 03:计算书费
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main() {
    float a[10] = {28.9, 32.7, 45.6, 78, 35, 86.2, 27.8, 43, 56, 65};

    float sum = 0;
    for (int i = 0; i < 10; ++i) {
        int temp;
        scanf("%d", &temp);
        sum += a[i] * temp;
    }
    
    printf("%.1f", sum);

    return 0;
}
