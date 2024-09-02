#include <stdio.h>
#include <math.h>

const double PI = 3.14;

int main() {
    // 13:反向输出一个三位数
    int n = 100;
    scanf("%d", &n);

    // int time = a / b;
    while (n > 0) {
        int i = n % 10;
        n /= 10;
        printf("%d", i);
    }

    // printf("%.2lf\n", v); 

    return 0;
}