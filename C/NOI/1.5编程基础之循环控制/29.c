#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int count3(int n);

int main() {
    // 29:数字反转

    int n = -380;
    scanf("%d", &n);

    if (n >= 0) {
        printf("%d", count3(n));
    }
    else {
        printf("%d", 0 - count3(-n));
    }
    return 0;
}

// >= 0 
int count3(int n) {
    if (n == 0) {
        return 0;
    }

    int result = 0;
    while (n > 0) {
        int temp = n % 10;
        result = result * 10 + temp;
        n /= 10;
        
    }
    return result;

}