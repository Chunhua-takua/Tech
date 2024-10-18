// 16:忽略大小写的字符串比较
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define NUM 255
char str1[NUM] = "hello\n";
char str2[NUM] = "hello";

bool isUpperCase(char ch);
void changeToLowerCase(char* str);

int main() {
    fgets(str1, NUM, stdin);
    fgets(str2, NUM, stdin);

    int len1 = strlen(str1) - 1;
    int len2 = strlen(str2) - 1;
    // printf("%d %d\n", len1, len2);

    // fgets 末尾可能有换行符，要把它去掉
    if (str1[len1] == '\n')
        str1[len1] = '\0';
    if (str2[len2] == '\n')
        str2[len2] = '\0';

    changeToLowerCase(str1);
    changeToLowerCase(str2);

    for (int i = 0; i < 100; ++i) {
        if (str1[i] == '\0' && str2[i] == '\0') {
            printf("=");
            return 0;
        }

        if (str1[i] == '\0' && str2[i] != '\0') {
            printf("<");
            return 0;
        }

        if (str1[i] != '\0' && str2[i] == '\0') {
            printf(">");
            return 0;
        }

        if (str1[i] < str2[i]) {
            printf("<");
            return 0;
        }

        if (str1[i] > str2[i]) {
            printf(">");
            return 0;
        }

    }

    printf("=");

    return 0;
}

bool isUpperCase(char ch) {
    if (ch >= 'A' && ch <= 'Z')
        return true;
    return false;
}

void changeToLowerCase(char* str) {
    int len = strlen(str);
    // printf("in func, len= %d\n", len);
    int bias = 'a' - 'A';
    for (int i = 0; i < len; ++i)
        if (isUpperCase(str[i]))
            str[i] += bias;
}