// 05:输出亲朋字符串
#include <stdio.h>
// #include <math.h>
#include <string.h>
#include <stdbool.h>

#define NUM 20

bool isNumber(char ch);
bool isAlphabet(char ch);

int main() {
    char s[NUM];
    // scanf("%s", s);
    fgets(s, NUM, stdin);

    int len = strlen(s) - 1;

    for (int i = 0; i < len; ++i) {
        if (i == 0 && isNumber(s[i])) {
            printf("no");
            return 0;
        }

        if (!isAlphabet(s[i]) && !isNumber(s[i]) && s[i] != '_') {
            printf("no");
            return 0;
        }
    }

    printf("yes");
    return 0;
}

bool isNumber(char ch) {
    if (ch >= '0' && ch <= '9')
        return true;
    return false;
}

bool isAlphabet(char ch) {
    if (ch >= 'a' && ch <= 'z'
        || ch >= 'A' && ch <= 'Z')
        return true;
    return false;
}