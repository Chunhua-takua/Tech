// 01:统计数字字符个数
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

char str[300];

int main() {
    fgets(str, 300, stdin);
    // printf("%s\n", str);

    int count = 0;
    for (int i = 0; i < strlen(str); ++i) {
        if (str[i] >= '0' && str[i] <= '9')
            ++count;
    }

    printf("%d", count);
    
    return 0;
}

