// 20:删除单词后缀
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define NUM 255
char str1[NUM] = "hello\n";
char str2[NUM] = "hello";

bool isEndWithEr(char* s);
bool isEndWithLy(char* s);
bool isEndWithIng(char* s);

int main() {
    // fgets(str1, NUM, stdin);
    // fgets(str2, NUM, stdin);
    char word[32] = "referling";
    scanf("%s", word);

    int len = strlen(word);

    if (isEndWithEr(word)) {
        word[len - 2] = '\0';
        word[len - 1] = '\0';
    }
    else if (isEndWithLy(word)) {
        word[len - 2] = '\0';
        word[len - 1] = '\0';
    }
    else if (isEndWithIng(word)) {
        word[len - 3] = '\0';
        word[len - 2] = '\0';
        word[len - 1] = '\0';
    }
    

    printf("%s", word);

    return 0;
}

bool isEndWithEr(char* s) {
    int len = strlen(s);
    if (s[len - 2] == 'e' && s[len - 1] == 'r')
        return true;
    return false;
}

bool isEndWithLy(char* s) {
    int len = strlen(s);
    if (s[len - 2] == 'l' && s[len - 1] == 'y')
        return true;
    return false;
}

bool isEndWithIng(char* s) {
    int len = strlen(s);
    if (s[len - 3] == 'i' && s[len - 2] == 'n' && s[len - 1] == 'g')
        return true;
    return false;
}