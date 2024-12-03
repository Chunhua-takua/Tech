/**
 * 09:直方图
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

#define MAX 10000

// 大数组放在堆中
int arr[MAX + 1];

int main() {
    int n;
    scanf("%d", &n);
    int max = 0;
    for (int i = 0; i < n; ++i) {
        int temp;
        scanf("%d", &temp);

        ++arr[temp];
        max = max < temp ? temp : max;
    }

    for (int i = 0; i < max + 1; ++i) {
        printf("%d\n", arr[i]);
    }
        
    return 0;
}
