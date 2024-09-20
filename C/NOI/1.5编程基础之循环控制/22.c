#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // 22:津津的储蓄计划
    int* budgets = (int*) malloc(sizeof(int) * 12);
    for (int i = 0; i < 12; ++i) {
        scanf("%d", &budgets[i]);
    }

    int deposit = 0;
    int remain = 0;

    int temp = 0;
    for (int i = 0; i < 12; ++i) {
        temp = 300 + remain - budgets[i];


        if (temp < 0) {
            printf("%d\n", -(i + 1));
            return 0;
        }
        else if (temp < 100) {
            remain = temp;
        }
        else {
            deposit = deposit + (temp - temp % 100);
            remain =  temp % 100;
        }
    }

    int sum = deposit * 1.2 + remain;
    printf("%d\n", sum);

    free(budgets);

    return 0;
}