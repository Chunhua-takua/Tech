/**
 * 12:最长平台
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

#define MAX 1000

int arr[MAX];

int main() {
    int n;
    scanf("%d", &n);

    int count = 0;
    int max = 0;
    int p;
    int plateau;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &p);

        if (i == 0) {
            ++count;
            plateau = p;
            max = 1;
            continue;
        }

        if (p == plateau) {
            ++count;
            max = max < count ? count : max;
        }
        else {
            plateau = p;
            max = max < count ? count : max;
            count = 1;
        }
    }

    printf("%d", max);
    return 0;
}