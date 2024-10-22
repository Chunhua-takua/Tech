// 24:单词的长度
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#define NUM 255

char word[NUM];

int main() {
    int count = 0;
    while (scanf("%s", word) != EOF) {
        if (0 == count) {
            printf("%d", strlen(word));
            ++count;
        }
        else {
            printf(",%d", strlen(word));
        }
        
    }

    return 0;
}
