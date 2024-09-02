#include <stdio.h>
#include <math.h>

const double PI = 3.14159;

int main() {
    // 20:计算2的幂
    int n = 3;
    scanf("%d", &n);

    
    printf("%lld\n", (long long) pow(2, n)); 

    return 0;
}