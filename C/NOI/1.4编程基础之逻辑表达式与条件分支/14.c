#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    // 14:计算邮资
    int weight = 1200;
    
    char flag = 'n';
    scanf("%d %s", &weight, &flag);

    int fee = 8;
    if (weight > 1000) {
        fee += 4 * (int) ceil((weight - 1000.0) / 500);
    }

    switch (flag) {
        case 'y':
            fee += 5;
            break;
    }

    printf("%d", fee);
    return 0;
}