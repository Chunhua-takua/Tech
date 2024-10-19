// 19:字符串移位包含问题
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define NUM 255
char str1[NUM] = "hello\n";
char str2[NUM] = "hello";

bool isSubstring(char* str1, char* str2);

int main() {
    // fgets(str1, NUM, stdin);
    // fgets(str2, NUM, stdin);
    scanf("%s %s", str1, str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (isSubstring(str2, str1) || isSubstring(str1, str2)) {
        printf("true");
    }
    else {
        printf("false");
    }

    return 0;
}

bool isSubstring(char* str1, char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 > len2)
        return false;

    for (int i = 0; i < len2; ++i) {
        int temp = i;
        for (int j = 0; j < len1; ++j) {
            // printf("%c,%c\n", str1[j], str2[i]);
            if (str1[j] == str2[i % len2]) {
                if (j < len1 - 1) {
                    ++i;
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
