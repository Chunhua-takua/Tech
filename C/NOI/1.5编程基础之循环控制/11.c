#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // 11:整数的个数
    int k;
    scanf("%d", &k);

    int sum_1 = 0;
    int sum_5 = 0;
    int sum_10 = 0;

    for (int i = 0; i < k; ++i) {
        int temp;
        scanf("%d", &temp);
        if (1 == temp) {
            sum_1++;
        }
        else if (5 == temp) {
            sum_5++;
        }
        else if (10 == temp) {
            sum_10++;
        }
    }

    printf("%d\n%d\n%d", sum_1, sum_5, sum_10);

    return 0;
}

