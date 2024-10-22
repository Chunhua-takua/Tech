// 25:最长最短单词
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#define NUM 100

char word[NUM];
char longest[NUM];
char shortest[NUM];

int main() {
    int l = 0;
    int s = 200;

    while (scanf("%s", word) != EOF) {
        int len = strlen(word);
        
        if (l < len) {
            l = len;
            strcpy(longest, word);
        }

        if (s > len) {
            s = len;
            strcpy(shortest, word);
        }

        // printf("len:%d, long:%s, short:%s \n", len, longest, shortest);
    }

    printf("%s\n%s", longest, shortest);

    return 0;
}
