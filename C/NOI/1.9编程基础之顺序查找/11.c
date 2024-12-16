/**
 * 11:连续出现的字符
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
    int k;
    scanf("%d", &k);
    getchar();

    char ch = getchar();
    char previous = ch;
    int count = 1;
    while (ch != '\0' && ch != '\n' && ch != EOF) {
        if (count == k) {
            printf("%c", ch);
            return 0;
        }

        ch = getchar();
        if (previous == ch) {
            ++count;
        }
        else {
            count = 1;
            previous = ch;
        }
    }

    printf("No");

    return 0;
}