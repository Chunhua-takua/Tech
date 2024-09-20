#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // 23:药房管理
    int m = 30;
    int n = 6;
    scanf("%d%d", &m, &n);

    int remain = m;
    int refuse = 0;
    for (int i = 0; i < n; ++i) {
        int demand;
        scanf("%d", &demand);
        
        if (demand > remain) {
            ++refuse;
            continue;
        }

        remain -= demand;
    }

    printf("%d", refuse);
    return 0;
}