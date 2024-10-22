// 23:过滤多余的空格
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#define NUM 255

char word[NUM];

int main() {
    while (scanf("%s", word) != EOF) {
        printf("%s ", word);
    }

    return 0;
}
