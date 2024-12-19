/**
 * 13:整数去重
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

#define MAX 20000

int arr[MAX];

int main() {
    int n;
    scanf("%d", &n);

    int count = 0;
    for (int i = 0; i < n; ++i) {
        int temp;
        scanf("%d", &temp);
        int j = 0;
        for (; j < count; ++j) {
            if (arr[j] == temp)
                break;

        }

        if (count == j) {
            arr[count] = temp;
            ++count;
        }

    }

    for (int i = 0; i < count; ++i)
        printf("%d ", arr[i]);

    return 0;
}