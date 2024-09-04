#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    // 15:最大数输出
    int n1 = 10;
    int n2 = 20;
    int n3 = 56;
    scanf("%d %d %d", &n1, &n2, &n3);

    int max = n1;
    max = max > n2 ? max : n2;
    max = max > n3 ? max : n3;

    printf("%d", max);
    return 0;
}