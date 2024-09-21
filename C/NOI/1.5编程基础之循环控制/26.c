#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

bool judge(int n);

int main() {
    // 26:统计满足条件的4位数个数

    int n;
    scanf("%d", &n);

    int count = 0;
    for (int i = 0; i < n; ++i) {
        int temp;
        scanf("%d", &temp);
        count = judge(temp) ? count + 1 : count;
    }

    printf("%d", count);

    return 0;
}

bool judge(int n) {
    int a = n / 1000;
    int b = (n - 1000 * a) / 100;
    int c = (n - 1000 * a - 100 * b) / 10;
    int d = n % 10;
    if (d - a - b - c > 0) {
        return true;
    }
    return false;
}