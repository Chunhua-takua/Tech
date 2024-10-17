// 10:简单密码
#include <stdio.h>
// #include <math.h>
#include <string.h>
#include <stdbool.h>

#define NUM 255
char encode[NUM];
char decode[NUM];

int main() {
    fgets(encode, NUM, stdin);
    int len = strlen(encode) - 1;

    for (int i = 0; i < len; ++i) {
        if (encode[i] >= 'A' && encode[i] <= 'E')
            decode[i] = encode[i] + 'V' - 'A';
        else if (encode[i] >= 'F' && encode[i] <= 'Z')
            decode[i] = encode[i] - 'F' + 'A';
        else
            decode[i] = encode[i];
    }

    printf("%s\n", decode);

    return 0;
}
