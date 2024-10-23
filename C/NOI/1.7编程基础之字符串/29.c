// 29:ISBN号码
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#define NUM 1000

char str[NUM];

bool isDigit(char ch);

int main() {
    scanf("%s", str);
    int len = strlen(str);

    int count = 0;
    int sum = 0;
    for (int i = 0; i < len - 1; ++i) {
        if (isDigit(str[i])) {
            ++count;
            sum += count * (str[i] - '0');
        }
    }    

    int id = sum % 11;
    if (id == 10 && str[len - 1] == 'X') {
        printf("Right");
    }
    else if (id == str[len - 1] - '0') {
        printf("Right");
    }
    else {
        // printf("id:%d\n", id);
        if (id == 10)
            str[len - 1] = 'X';
        else
            str[len - 1] = id + '0';
        printf("%s", str);
    }

    return 0;
}

bool isDigit(char ch) {
    if (ch >= '0' && ch <= '9')
        return true;
    return false;
}