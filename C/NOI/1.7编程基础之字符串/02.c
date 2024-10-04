// 02:找第一个只出现一次的字符
#include <stdio.h>
// #include <math.h>
#include <string.h>
// #include <stdbool.h>

#define NUM 100000
char str[NUM];

int letters[26];

int main() {
    scanf("%s", str);

    // last char is \n
    int len = strlen(str);
    for (int i = 0; i < len; ++i) {
        int temp = str[i] - 'a';
        letters[temp]++;
    }


    for (int i = 0; i < len; ++i) {
        if (letters[str[i] - 'a'] == 1) {
            printf("%c", str[i]);
            return 0;
        }
    }
    printf("no");
    
    return 0;
}

