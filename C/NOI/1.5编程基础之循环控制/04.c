#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // 04:求整数的和与均值
    int n = 4;
    scanf("%d", &n);

    int sum = 0;
    

    for (int i = 0; i < n; ++i) {
        int temp;
        scanf("%d", &temp);
        sum += temp;
    }

    double average = (double) sum / n;
    
    printf("%d %.5lf", sum, average);

    return 0;
}