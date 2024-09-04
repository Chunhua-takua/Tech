#include <stdio.h>
// #include <math.h>
// #include <string.h>

int main() {
    // 03:奇偶数判断
    int n = 6;
    scanf("%d", &n);

    if (n % 2 == 1) {
        printf("odd\n");
    }
    else {
        printf("even\n");
    }

//    printf("%.2f", n) ;
    return 0;
}