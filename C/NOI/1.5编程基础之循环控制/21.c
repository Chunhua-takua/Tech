#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

bool isOdd(long long n);
long long dealOdd(long long n);
long long dealEven(long long n);

int main() {
    // 21:角谷猜想
    int n = 1;
    scanf("%d", &n);
    
    long long temp = n;
    
    while (temp > 1) {
        if (isOdd(temp)) {
            temp = dealOdd(temp);
        }
        else {
            temp = dealEven(temp);
        }
        // printf("temp: %lld\n", temp);
    }
    printf("End");

    return 0;
}

long long dealOdd(long long n) {
    long long result = n * 3 + 1;
    printf("%lld*3+1=%lld\n", n, result);
    return result;
}

long long dealEven(long long n) {
    long long result = n / 2;
    printf("%lld/2=%lld\n", n, result);
    return result;
}

bool isOdd(long long n) {
    if (n % 2 == 1) {
        return true;
    }
    return false;
}