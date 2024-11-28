/**
 * 07:不与最大数相同的数字之和
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

#define MAX 200

bool isPrime(int n);

int main() {
    int n;
    scanf("%d", &n);

    int arr[MAX];
    for (int i = 0; i < MAX; ++i)
        arr[i] = 0;

    int max = -INT_MAX;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
        max = max < arr[i] ? arr[i] : max;
    }

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] != max) 
            sum += arr[i];
    }
    printf("%d", sum);

    return 0;
}
