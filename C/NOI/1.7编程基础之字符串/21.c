// 21:单词替换
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define NUM 255

char newS[NUM];

bool compareWord(char* word, char* a);
void write(char* newS, char* word);

int main() {
    char str[NUM] = "abcdedcbab";
    char a[NUM];
    char b[NUM];
    fgets(str, NUM, stdin);
    scanf("%s", a);
    scanf("%s", b);

    int len = strlen(str) - 1;
    if (str[len] == '\n')
        str[len] = '\0';

    char word[NUM];
    for (int i = 0; i < NUM; ++i)
        word[i] = '\0';

    int count = 0;
    for (int i = 0; i <= len; ++i) {
        if (str[i] != ' ' && str[i] != '\0') {
            word[count] = str[i];
            ++count;
        }
        else {
            // split a word; compare
            if (compareWord(word, a)) {
                write(newS, b);
            }
            else {
                write(newS, word);
            }
            
            for (int i = 0; i < NUM; ++i)
                word[i] = '\0';
            count = 0;
        }
    }

    printf("%s", newS);

    return 0;
}

bool compareWord(char* word, char* a) {
    if (strlen(word) != strlen(a)) 
        return false;

    for (int i = 0; i < strlen(word); ++i) {
        if (word[i] != a[i]) 
            return false;
    }

    return true;
}

void write(char* newS, char* word) {
    int len = strlen(newS);

    if (len == 0) {
        for (int i = 0; i < strlen(word); ++i) {
            newS[i] = word[i];
        }
        return;
    }    

    newS[len] = ' ';
    for (int i = 0; i < strlen(word); ++i) {

        newS[len + 1 + i] = word[i];
    }
}