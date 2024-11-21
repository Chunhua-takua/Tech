/**
 * 01:查找特定的值
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

#define MAX 10000

int main() {
    int n;
    scanf("%d", &n);

    int m[MAX];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &m[i]);
    }

    int x;
    scanf("%d", &x);
    for (int i = 0; i < n; ++i) {
        if (m[i] == x) {
            printf("%d", i + 1);
            return 0;
        }
    }
    printf("-1");

    return 0;
}
