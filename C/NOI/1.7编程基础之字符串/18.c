// 18:验证子串
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define NUM 255
char str1[NUM] = "hello\n";
char str2[NUM] = "hello";

bool isUpperCase(char ch);
void changeToLowerCase(char* str);
void deleteSpaces(char* str);
bool isSubstring(char* str1, char* str2);

int main() {
    fgets(str1, NUM, stdin);
    fgets(str2, NUM, stdin);

    int len1 = strlen(str1) - 1;
    int len2 = strlen(str2) - 1;

    // fgets 末尾可能有换行符，要把它去掉
    if (str1[len1] == '\n')
        str1[len1] = '\0';
    if (str2[len2] == '\n')
        str2[len2] = '\0';

    if (len1 <= len2 && isSubstring(str1, str2)) {
        printf("%s is substring of %s", str1, str2);
    }
    else if (len1 > len2 && isSubstring(str2, str1)) {
        printf("%s is substring of %s", str2, str1);
    }
    else {
        printf("No substring");
    }

    return 0;
}

bool isSubstring(char* str1, char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    for (int i = 0; i <= len2 - len1; ++i) {
        int temp = i;
        for (int j = 0; j < len1; ++j) {
            // printf("%c,%c\n", str1[j], str2[i]);
            if (str1[j] == str2[i]) {
                if (j < len1 - 1) {
                    ++i;
                    // continue;
                }
                else if (j == len1 - 1) {
                    return true;
                }   
            }
            else {
                i = temp;
                break;
            }
        }
    }
    return false;
}
