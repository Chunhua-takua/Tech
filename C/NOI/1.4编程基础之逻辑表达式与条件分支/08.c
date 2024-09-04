#include <stdio.h>
// #include <math.h>
// #include <string.h>

int main() {
    // 08:判断一个数能否同时被3和5整除
    int n = 14;
    scanf("%d", &n);

    if (n % 3 == 0 && n % 5 == 0) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

    return 0;
}