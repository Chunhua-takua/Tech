#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int dividableBy7(int n);
int countOnes(int n);

int main() {
    // 39:与7无关的数

    int n = 21;
    scanf("%d", &n);
    
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        if (!countOnes(i) && !dividableBy7(i)) {
            sum += i * i;
        }
    }
    
    printf("%d", sum);

    return 0;
}

int dividableBy7(int n) {
    if (n % 7 == 0) {
        return true;
    }
    return false;
}

int countOnes(int n) {
    while (n > 0) {
        int temp = n % 10;
        n /= 10;
        if (temp == 7) {
            return true;
        }
    }

    return false;
}