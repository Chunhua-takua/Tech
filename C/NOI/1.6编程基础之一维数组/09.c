// 09:向量点积计算
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int a[1000];
int b[1000];

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; ++i) {
        scanf("%d", &b[i]);
    }

    int product = 0;
    for (int i = 0; i < n; ++i) {
        product += a[i] * b[i];
    }
    

    printf("%d", product);
    
    return 0;
}
