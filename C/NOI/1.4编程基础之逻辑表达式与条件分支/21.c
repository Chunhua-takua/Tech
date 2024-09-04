#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // 21:苹果和虫子2
    int n = 10;
    int x = 4;
    int y = 9;
    scanf("%d%d%d", &n, &x, &y);

    int remain = n - (y + x - 1) / x;
    if (remain < 0) {
        printf("0");
    }
    else {
        printf("%d", remain);
    }
    
    return 0;
}