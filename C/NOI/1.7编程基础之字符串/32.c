// 32:行程长度编码
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#define NUM 1000

char str[NUM];

void toUpper(char* str);

int main() {
    scanf("%s", str);
    int len = strlen(str);

    toUpper(str);

    char pre = str[0];
    int count = 0;

    for (int i = 0; i < len; ++i) {
        if (str[i] == pre) {
            ++count;
        }
        else {
            printf("(%c,%d)", pre, count);
            count = 1;
            pre = str[i];
        }
    }

    if (count > 0)
        printf("(%c,%d)", pre, count);

    return 0;
}

void toUpper(char* str) {
    int bias = 'a' - 'A';
    for (int i = 0; i < strlen(str); ++i) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= bias;
    }
}