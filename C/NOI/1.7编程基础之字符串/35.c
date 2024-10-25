/**
 * 35:字符串的展开
 * 仅由数字、小写字母和减号“-”组成。行首和行末均无空格。
 * (1) 需要展开：减号两侧同为小写字母或同为数字，且按照ASCII码的顺序，减号右边的字符严格大于左边的字符。
 * 
 * 如果减号右边的字符恰好是左边字符的后继，只删除中间的减号
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#define NUM 1000

char str[NUM];
void printOrder(char pre, char next, int p1, int p2);
void printReverse(char pre, char next, int p1, int p2);
char getUpper(char ch);
char getLower(char ch);
bool isDigit(char ch);
bool isAlphabet(char ch);
bool matchConditions(char pre, char next);

int main() {
    int p1, p2, p3;
    scanf("%d %d %d", &p1, &p2, &p3);

    scanf("%s", str);
    int len = strlen(str);

    int pre;
    int next;
    for (int i = 0; i < len; ++i) {
        pre = i - 1;
        next = i + 1;

        if (str[i] != '-')
            printf("%c", str[i]);
        else {
            // 符合展开条件，如 a-c
            if (pre >= 0 && next <= len - 1 && matchConditions(str[pre], str[next])) {
                switch (p3) {
                    case 1:
                        // order
                        printOrder(str[pre], str[next], p1, p2);
                        break;
                    case 2:
                        // reverse
                        printReverse(str[pre], str[next], p1, p2);
                        break;
                    }
            }
            else {
                printf("%c", str[i]);
            }
        }
    }

    return 0;
}

bool matchConditions(char pre, char next) {
    // 减号两侧同为小写字母或同为数字，且按照ASCII码的顺序，减号右边的字符严格大于左边的字符。
    if (isDigit(pre) && isDigit(next) && pre < next
        || isAlphabet(pre) && isAlphabet(next) && pre < next)
        return true;
    return false;
}

bool isDigit(char ch) {
    if (ch >= '0' && ch <= '9')
        return true;
    return false;
}

bool isAlphabet(char ch) {
    if (ch >= 'a' && ch <= 'z') 
        return true;
    return false;
}

void printOrder(char pre, char next, int p1, int p2) {
    // printf("%c", pre);

    if (p1 == 1) {
        // lower case
        char start = getLower(pre) + 1;
        char end = getLower(next) - 1;
        while (start <= end) {
            for (int i = 0; i < p2; ++i) {
                printf("%c", start);
            }
            ++start;
        }
        
    }
    else if (p1 == 2) {
        // upper case
        char start = getUpper(pre) + 1;
        char end = getUpper(next) - 1;
        while (start <= end) {
            for (int i = 0; i < p2; ++i) {
                printf("%c", start);
            }
            ++start;
        }
    }
    else if (p1 == 3) {
        // *
        char start = getLower(pre) + 1;
        char end = getLower(next) - 1;
        while (start <= end) {
            for (int i = 0; i < p2; ++i) {
                printf("*");
            }
            ++start;
        }
    }
}

void printReverse(char pre, char next, int p1, int p2) {
    if (p1 == 1) {
        // lower case
        char start = getLower(next) - 1;
        char end = getLower(pre) + 1;
        while (start >= end) {
            for (int i = 0; i < p2; ++i) {
                printf("%c", start);
            }
            --start;
        }
    }
    else if (p1 == 2) {
        // upper case
        char start = getUpper(next) - 1;
        char end = getUpper(pre) + 1;
        while (start >= end) {
            for (int i = 0; i < p2; ++i) {
                printf("%c", start);
            }
            --start;
        }
    }
    else if (p1 == 3) {
        // *
        char start = getLower(next) - 1;
        char end = getLower(pre) + 1;
        while (start >= end) {
            for (int i = 0; i < p2; ++i) {
                printf("*");
            }
            --start;
        }
    }
}

char getUpper(char ch) {
    if (ch >= 'a' && ch <= 'z')
        return ch - 32;
    return ch;
}

char getLower(char ch) {
    if (ch >= 'A' && ch <= 'Z')
        return ch + 32;
    return ch;
}