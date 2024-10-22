// 26:字符串最大跨距
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

// 数组过小可能会有 RE
#define NUM 500

char str[NUM];

int main() {
    fgets(str, NUM, stdin);
    int len = strlen(str) - 1;
    if (str[len] == '\n')
        str[len] = '\0';

    char* s = strtok(str, ",");
    char* s1 = strtok(NULL, ",");
    char* s2 = strtok(NULL, ",");

    int len_s = strlen(s);
    int len_s1 = strlen(s1);
    int len_s2 = strlen(s2);

    int s1_end = 0;
    for (int i = 0; i <= len_s - len_s1; ++i) {
        char temp[10];
        memset(temp, '\0', sizeof(temp));
        strncpy(temp, s + i, len_s1);
        if (strcmp(temp, s1) == 0) {
            s1_end = i + len_s1 - 1;
            break;
        }
    }

    int s2_start = 0; 
    for (int i = len_s - 1; i >= len_s2 - 1; --i) {
        char temp[10];
        memset(temp, '\0', sizeof(temp));
        strncpy(temp, s + i - len_s2 + 1, len_s2);

        if (strcmp(temp, s2) == 0) {
            s2_start = i - len_s2 + 1;
            break;
        }
    }

    if (s1_end < s2_start) {
        printf("%d", s2_start - s1_end - 1);
    }
    else {
        printf("-1");
    }

    return 0;
}
