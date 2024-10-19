// 33:判断字符串是否为回文
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define NUM 255

int main() {
    char str[NUM] = "abcdedcbab";
    scanf("%s", str);

    int len = strlen(str);

    int i = 0;
    int j = len - 1;
    while (i < j) {
        if (str[i] == str[j]) {
            ++i;
            --j;
        }
        else {
            printf("no");
            return 0;
        }
    }

    printf("yes");

    return 0;
}
