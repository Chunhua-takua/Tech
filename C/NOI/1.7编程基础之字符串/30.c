// 30:字符环
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#define NUM 1000

char str1[NUM];
char str2[NUM];


int main() {
    scanf("%s", str1);
    int len_str1 = strlen(str1);
    scanf("%s", str2);
    int len_str2 = strlen(str2);

    int min_len = len_str1 < len_str2 ? len_str1 : len_str2;

    int max = 0;
    int len = 0;

    for (int i = 0; i < len_str1; ++i) {
        for (int j = 0; j < len_str2; ++j) {
            while (len < min_len) {
                // printf("%c, %c\n", str1[(i + len) % len_str1], str2[(j + len) % len_str2]);

                if (str1[(i + len) % len_str1] != str2[(j + len) % len_str2]) {
                    break;
                }
                else {
                    ++len;
                    max = max > len ? max : len;
                }
            }
            
            len = 0;
        }
    }

    printf("%d", max);

    return 0;
}
