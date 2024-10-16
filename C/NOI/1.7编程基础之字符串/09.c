// 09:密码翻译
#include <stdio.h>
// #include <math.h>
#include <string.h>
#include <stdbool.h>

#define NUM 255
char src_str[NUM];
char dest_str[NUM];

int main() {
    fgets(src_str, NUM, stdin);
    int len = strlen(src_str);

    for (int i = 0; i < len; ++i) {
        if (src_str[i] >= 'a' && src_str[i] <= 'z')
            dest_str[i] = (src_str[i] - 'a' + 1) % 26 + 'a';
        else if (src_str[i] >= 'A' && src_str[i] <= 'Z')
            dest_str[i] = (src_str[i] - 'A' + 1) % 26 + 'A';
        else
            dest_str[i] = src_str[i];
    }

    printf("%s\n", dest_str);

    return 0;
}
