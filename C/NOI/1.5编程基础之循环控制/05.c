#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // 05:最高的分数
    int n = 4;
    scanf("%d", &n);

    int max = 0;
    

    for (int i = 0; i < n; ++i) {
        int temp;
        scanf("%d", &temp);
        max = max > temp ? max : temp;
    }

    // double average = (double) sum / n;
    
    printf("%d", max);

    return 0;
}