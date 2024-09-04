#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    // 17:判断闰年
    int year = 3200;

    scanf("%d", &year);

    if (year % 4 == 0 && year % 100 == 0 && year % 400 != 0) {
        printf("N");
    }
    else if (year % 3200 == 0) {
        printf("N");
    }
    else if (year % 4 == 0) {
        printf("Y");
    }
    else {
        printf("N");
    }

    return 0;
}