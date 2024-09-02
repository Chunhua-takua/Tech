#include <stdio.h>
#include <math.h>

const double PI = 3.14159;

int main() {
    // 15:苹果和虫子
    int n = 10;
    int x = 4;
    int y = 9;
    scanf("%d%d%d", &n, &x, &y);

    int num = n - (y + x - 1) / x;

    printf("%d\n", num); 

    return 0;
}