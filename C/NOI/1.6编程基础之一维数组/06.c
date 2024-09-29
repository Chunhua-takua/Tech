// 06:校门外的树
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int a[10000];

int main() {
    int l, m;
    scanf("%d%d", &l, &m);

    for (int i = 0; i <= l; ++i) {
        a[i] = 1;
    }

    for (int i = 0; i < m; ++i) {
        int start, end;
        scanf("%d%d", &start, &end);

        for (int j = start; j <= end; ++j) {
            a[j] = 0;
        }
    }

    int count = 0;
    for (int i = 0; i <= l; ++i) {
        count += a[i];
    }
    printf("%d", count);
    
    return 0;
}
