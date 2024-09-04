#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    // 18:点和正方形的关系
    int x = 1;
    int y = 11;

    scanf("%d %d", &x, &y);

    if (x < -1 || x > 1 || y < -1 || y > 1) {
        printf("no");
    }
    else {
        printf("yes");
    }

    return 0;
}