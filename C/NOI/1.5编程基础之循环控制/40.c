#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int countOnes(int n);

int main() {
    // 40:数1的个数

    int n = 2;
    scanf("%d", &n);
    
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += countOnes(i);
    }
    
    printf("%d", sum);

    return 0;
}

int countOnes(int n) {
    int count = 0;

    while (n > 0) {
        int temp = n % 10;
        n /= 10;
        if (temp == 1) {
            ++count;
        }
    }

    return count;
}