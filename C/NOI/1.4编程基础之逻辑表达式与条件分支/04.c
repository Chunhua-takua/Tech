#include <stdio.h>
// #include <math.h>
// #include <string.h>

int main() {
    // 04:奇偶ASCII值判断
    char ch = 'A';
    ch = getchar();

    if (ch % 2 == 1) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

    return 0;
}