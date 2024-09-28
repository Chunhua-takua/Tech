// 04:数组逆序重放
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int a[100];

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; ++i) {
        printf("%d ", a[n - i - 1]);
    }
    
    return 0;
}
