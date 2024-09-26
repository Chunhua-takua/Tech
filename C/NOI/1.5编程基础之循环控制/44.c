#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

bool isPrime(int n);

int main() {
    // 44:第n小的质数

    int n = 10;
    scanf("%d", &n);

    if (n == 1) {
        printf("2");
        return 0;
    }
    // int prime;
    int count = 0;
    int pivot = 2;
    while (count < n) {
        if (isPrime(pivot)) {
            ++count;
        }
        
        ++pivot;
        if (pivot % 2 == 0) {
            ++pivot;
        }
    }

    printf("%d", pivot - 2);
    return 0;
}

bool isPrime(int n) {
    // 埃拉托斯特尼筛选法
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}