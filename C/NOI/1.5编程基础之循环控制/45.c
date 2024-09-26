#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // 45:金币

    int n = 6;
    scanf("%d", &n);

    int count = 0;
    int d = 1;
    int day_pay = 1;
    int sum = 0;
    while (d <= n) {
        if (count < day_pay) {
            ++count;
            sum += day_pay;
        }
        else {
            count = 1;
            ++day_pay;
            sum += day_pay;
        }

        ++d;    
    }

    printf("%d", sum);

    return 0;
}
