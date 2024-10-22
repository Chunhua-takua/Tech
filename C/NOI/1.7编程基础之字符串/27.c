// 27:单词翻转
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#define NUM 1000

char str[NUM];

void printReverse(char* str, int start, int end);

int main() {
    char ch = getchar();
    int count = 0;

    // 如果一行中含有空格，可以这样读取
    // use cin.getline(), or use getchar() and judge '\n' and EOF
    while (ch != '\n' && ch != EOF) {
        str[count++] = ch;
        ch = getchar();
    }
    int len = strlen(str);
    
    int start = -1; 
    int end = -1;
    for (int i = 0; i < len + 1; ++i) {
        if (str[i] == ' ') {
            if (start != -1) {
                printReverse(str, start, end);
                start = -1; 
                end = -1;
            }
            printf(" ");
        }
        else if (str[i] != ' ' && str[i] != '\0') {
            if (start == -1) {
                start = i;
                end = i;
            }
            else {
                end = i;
            }
        }
        else if (str[i] == '\0') {
            printReverse(str, start, end);
        }
    }

    return 0;
}

void printReverse(char* str, int start, int end) {
    for (int i = end; i >= start; --i)
        printf("%c", str[i]);
}
