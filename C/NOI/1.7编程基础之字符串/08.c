// 08:字符替换
#include <stdio.h>
// #include <math.h>
#include <string.h>
#include <stdbool.h>

#define NUM 255
char src_str[NUM];
char dest_str[NUM];

int main() {
    scanf("%s", src_str);
    int len = strlen(src_str);

    char ch1, ch2;
    scanf(" %c %c", &ch1, &ch2);

    for (int i = 0; i < len; ++i) {
        if (src_str[i] == ch1) {
            dest_str[i] = ch2;
            continue;
        }

        dest_str[i] = src_str[i];
    }


    printf("%s\n", dest_str);

    return 0;
}
