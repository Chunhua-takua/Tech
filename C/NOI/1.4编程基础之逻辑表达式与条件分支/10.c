#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    // 10:有一门课不及格的学生
    int n = 50;
    int m = 1;
    scanf("%d%d", &n, &m);

    if (n < 60 && m < 60) {
        printf("0");
    }
    else if (n >= 60 && m >= 60) {
        printf("0");
    }
    else {
        printf("1");
    }


    return 0;
}