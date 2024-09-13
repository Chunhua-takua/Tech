#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    // 03:均值
    int n;
    scanf("%d", &n);

    double temp = 0;
    double total = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%lf", &temp);
        total += temp;
    }

    printf("%.4lf", (double) total / n);
    
    return 0;
}