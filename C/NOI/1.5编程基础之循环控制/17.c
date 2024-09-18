#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // 17:菲波那契数列
    // 1 1 2 3 5 8 
    int k = 1;
    scanf("%d", &k);

    if (k == 1 || k == 2) {
        printf("1");
        return 0;
    }

    int t0 = 1;
    int t1 = 1;
    int t2;
    for (int i = 2; i < k; ++i) {
        t2 = t0 + t1;
        t0 = t1;
        t1 = t2;
    }

    printf("%d", t2);

    return 0;
}

