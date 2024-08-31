#include <stdio.h>

int main() {
    // 04:带余除法
    int a = 10;
    int b = 3;
    scanf("%d%d", &a, &b);

    printf("%d %d\n", a / b, a % b);

    return 0;
}