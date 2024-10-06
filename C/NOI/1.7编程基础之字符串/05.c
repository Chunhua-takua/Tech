// 05:输出亲朋字符串
#include <stdio.h>
// #include <math.h>
#include <string.h>
// #include <stdbool.h>

#define NUM 200

int main() {
    char s[NUM];
    char s1[NUM];
    // scanf("%s", s);
    fgets(s, 100, stdin);

    int len = strlen(s) - 1;
    // printf("len=%d\n", len);

    for (int i = 0; i < len; ++i) {
        s1[i] = s[i] + s[(i + 1) % len];
    }

    for (int i = 0; i < len; ++i)
        printf("%c", s1[i]);
    
    // printf("%s", s1); 未初始化，可能有数据
    return 0;
}

