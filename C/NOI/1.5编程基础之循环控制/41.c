#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int countTwos(int n);

int main() {
    // 41:数字统计

    int l = 2;
    int r = 22;
    scanf("%d%d", &l, &r);
    
    int sum = 0;
    for (int i = l; i <= r; ++i) {
        sum += countTwos(i);
    }
    
    printf("%d", sum);

    return 0;
}

int countTwos(int n) {
    int count = 0;

    while (n > 0) {
        int temp = n % 10;
        n /= 10;
        if (temp == 2) {
            ++count;
        }
    }

    return count;
}