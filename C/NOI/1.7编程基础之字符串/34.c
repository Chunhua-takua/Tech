// 34:回文子串
/*
    input: 
    123321125775165561
    
    output:
    33
    11
    77
    55
    2332
    2112
    5775
    6556
    123321
    165561
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#define NUM 1000

char str[NUM];

bool isPalindrome(char* str, int start, int end);
void print(char* str, int start, int end);

int main() {
    scanf("%s", str);
    int len = strlen(str);
    // i: length, j: start pointer
    for (int i = 2; i <= len; ++i) { 
        for (int j = 0; j + i - 1 < len; ++j) {
            if (isPalindrome(str, j, j + i - 1))
                print(str, j, j + i - 1);
        }
    }

    return 0;
}

void print(char* str, int start, int end) {
    for (int i = start; i <= end; ++i)
        printf("%c", str[i]);
    printf("\n");
}

bool isPalindrome(char* str, int start, int end) {
    int i = start;
    int j = end;
    while (i < j) {
        if (str[i] == str[j]) {
            ++i;
            --j;
        }
        else {
            return false;
        }
    }

    return true;
}