#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

bool isPrime(int n);

int main() {
    // 43:质因数分解

    int n = 6;
    scanf("%d", &n);

    int p = 1;
    // int max = 1;
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0 && isPrime(i)) {
            p = i;
            break;
            // max = max > p ? max : p;
        }
    }

    printf("%d", n / p);
    return 0;
}

bool isPrime(int n) {
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}