// 13:将字符串中的小写字母转换成大写字母
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define NUM 255
char str[NUM];

bool isLowerCase(char ch);

int main() {
    // scanf("%s", &str);
    fgets(str, NUM, stdin);
    int len = strlen(str);

    int bias = 'a' - 'A';
    for (int i = 0; i < len; ++i) {
        if (isLowerCase(str[i])) 
            str[i] -= bias;
    }

    printf("%s", str);
    return 0;
}

bool isLowerCase(char ch) {
    if (ch >= 'a' && ch <= 'z')
        return true;
    return false;
}