#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    // 09:判断能否被3，5，7整除
    int n = 101;
    scanf("%d", &n);

    int n3 = n % 3;
    int n5 = n % 5;
    int n7 = n % 7;

    if (n3 == 0) {
        printf("3 ");
    }

    if (n5 == 0) {
        printf("5 ");
    }

    if (n7 == 0) {
        printf("7");
    }

    if (n3 != 0 && n5 != 0 && n7 != 0) {
        printf("n");
    }


    return 0;
}