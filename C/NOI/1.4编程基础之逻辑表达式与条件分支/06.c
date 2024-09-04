#include <stdio.h>
// #include <math.h>
// #include <string.h>

int main() {
    // 06:判断是否为两位数
    long int x = 54;
    scanf("%d", &x);

    if (x < 10 || x > 99) {
        printf("0\n");
    }
    else {
        printf("1\n");
    }

    return 0;
}