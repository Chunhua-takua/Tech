#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    // 02:财务管理
    double temp = 0;
    double total = 0;
    for (int i = 0; i < 12; ++i) {
        scanf("%lf", &temp);
        total += temp;
    }

    printf("$%.2lf", (double) total / 12);
    
    return 0;
}