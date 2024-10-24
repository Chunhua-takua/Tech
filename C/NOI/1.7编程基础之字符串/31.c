// 31:字符串p型编码
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#define NUM 1000

char str[NUM];

int main() {
    scanf("%s", str);
    int len = strlen(str);

    char pre = str[0];
    int count = 0;

    for (int i = 0; i < len; ++i) {
        if (str[i] == pre) {
            ++count;
        }
        else {
            printf("%d%c", count, pre);
            count = 1;
            pre = str[i];
        }
    }

    if (count > 0)
        printf("%d%c", count, pre);

    return 0;
}
