// 14:大小写字母互换
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define NUM 255
char str[NUM];

bool isLowerCase(char ch);
bool isUpperCase(char ch);

int main() {
    // scanf("%s", &str);
    fgets(str, NUM, stdin);
    int len = strlen(str) - 1;

    int bias = 'a' - 'A';
    for (int i = 0; i < len; ++i) {
        if (isLowerCase(str[i])) 
            str[i] -= bias;
        else if (isUpperCase(str[i]))
            str[i] += bias;
    }

    printf("%s", str);
    return 0;
}

bool isLowerCase(char ch) {
    if (ch >= 'a' && ch <= 'z')
        return true;
    return false;
}

bool isUpperCase(char ch) {
    if (ch >= 'A' && ch <= 'Z')
        return true;
    return false;
}