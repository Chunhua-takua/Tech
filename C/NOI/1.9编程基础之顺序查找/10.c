/**
 * 10:找最大数序列
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
    getchar();

    int max = -1;
    int biggest = -1;
    char ch;
    for (int i = 0; i < n; ++i) {
        int temp;
        scanf("%d%c", &temp, &ch);
        max = temp;

        while (ch == ',') {
            max = max < temp ? temp : max;
            ch = ' ';
            scanf("%d%c", &temp, &ch);
        }
        max = max < temp ? temp : max;
        arr[i] = max;
        biggest = biggest < max ? max : biggest;
    }

    printf("%d\n", biggest);
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (biggest == arr[i]) {
            if (count == 0) {
                printf("%d", i + 1);
                ++count;
            }
            else {
                printf(",%d", i + 1);
            }
        }
    }
    printf("\n");

    return 0;
}