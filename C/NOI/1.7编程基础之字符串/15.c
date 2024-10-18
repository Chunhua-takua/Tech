// 15:整理药名
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define NUM 255
// char name[NUM];

bool isLowerCase(char ch);
bool isUpperCase(char ch);

int main() {
    int n;
    scanf("%d", &n);

    int bias = 'a' - 'A';
    for (int i = 0; i < n; ++i) {
        char name[NUM] = "";
        scanf("%s", &name);
        int name_len = strlen(name);
        for (int j = 0; j < name_len; ++j) {
            if (j == 0 && isLowerCase(name[j])) {
                name[j] -= bias;
            }

            if (j > 0 && isUpperCase(name[j])) {
                name[j] += bias;
            }
        }
        printf("%s\n", name);
    }

    return 0;
}

bool isLowerCase(char ch) {
    if (ch >= 'a' && ch <= 'z')
        return true;
    return false;
}

bool isUpperCase(char ch) {
    if (ch >= 'A' && ch <= 'Z')
        return true;
    return false;
}