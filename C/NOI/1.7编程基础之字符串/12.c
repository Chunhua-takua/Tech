// 12:加密的病历单
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define NUM 255
char encode[NUM];
char decode[NUM];

bool isUpperCase(char ch);

int main() {
    scanf("%s", &encode);
    int len = strlen(encode);

    // move right 3
    for (int i = 0; i < len; ++i) {
        if (isUpperCase(encode[i])) {
            decode[len - i - 1] = (encode[i] - 'A' + 3) % 26 + 'A';
        }
        else {
            decode[len - i - 1] = (encode[i] - 'a' + 3) % 26 + 'a';
        }
    }

    // reverse

    // reverse case
    int bias = 'a' - 'A';
    for (int i = 0; i < len; ++i) {
    
        if (isUpperCase(decode[i])) {
            decode[i] += bias;
        }
        else {
            decode[i] -= bias;
        }
    }

    printf("%s", decode);


    return 0;
}

bool isUpperCase(char ch) {
    if (ch >= 'A' && ch <= 'Z')
        return true;
    return false;
}