// 17:字符串判等
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define NUM 255
char str1[NUM] = "hello\n";
char str2[NUM] = "hello";

bool isUpperCase(char ch);
void changeToLowerCase(char* str);
void deleteSpaces(char* str);

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
    // printf("%s\n%s\n", str1, str2);

    // delete spaces
    deleteSpaces(str1);
    deleteSpaces(str2);
    // printf("%s\n%s\n", str1, str2);

    int flag = strcmp(str1, str2);
    if (flag == 0) {
        printf("YES");
    }
    else
        printf("NO");


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

void deleteSpaces(char* str) {
    int len = strlen(str);
    int i = 0;
    int j = 0;
    for (int i = 0; i < len; ++i) {
        if (str[i] != ' ' && str[j] != ' ') {
            ++j;
            // continue;
        }
        else if (str[i] == ' ' && str[j] == ' ') {
            continue;
        }
        else if (str[i] != ' ' && str[j] == ' ') {
            str[j] = str[i];
            str[i] = ' ';
            ++j;
        }
    }
    str[j] = '\0';
}