// 28:单词倒排
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#define NUM 100

char words[NUM][NUM];

int main() {
    char word[NUM];
    int count = 0;
    while (scanf("%s", word) != EOF) {
        strcpy(words[count], word);
        ++count;
    }

    for (int i = count - 1; i >= 0; --i) {
        if (i == count - 1)
            printf("%s", words[i]);
        else
            printf(" %s", words[i]);
        
    }

    return 0;
}
