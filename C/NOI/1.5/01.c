#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    // 01:求平均年龄
    int n = 2;
    scanf("%d", &n);

    int temp = 0;
    int total = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &temp);
        total += temp;
    }

    printf("%.2lf", (double) total / n);
    
    return 0;
}