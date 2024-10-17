// 11:潜伏者
#include <stdio.h>
// #include <math.h>
#include <string.h>
#include <stdbool.h>

#define NUM 255
char str1[NUM];
char str2[NUM];
char encode[NUM];

int main() {
    // fgets(str1, NUM, stdin);
    scanf("%s", &str1);
    // fgets(str2, NUM, stdin);
    scanf("%s", &str2);
    int len = strlen(str1);

    
    // fgets(, NUM, stdin);
    scanf("%s", &encode);

    char dict[26] = {'\0'};
    for (int i = 0; i < 26; ++i)
        dict[i] = '0';

    for (int i = 0; i < len; ++i) {
        if (dict[str1[i] - 'A'] == '0')
            dict[str1[i] - 'A'] = str2[i];
        else if (dict[str1[i] - 'A'] != str2[i]) {
            // 检查一个密文对应多个明文情况；不同的字母对应不同的“密字”
            printf("Failed");
            return 0;
        }
            
    }

    // 检查数量
    for (int i = 0; i < 26; ++i) {
        // printf("dict %d: %c\n", i, dict[i]);
        if (dict[i] == '0') {
            printf("Failed");
            return 0;
        }
    }

    // 检查一个明文对应多个密文情况；每个字母只对应一个唯一的“密字”
    for (int i = 0; i < 26; ++i) {
        for (int j = i + 1; j < 26; ++j) {
            if (dict[i] == dict[j]) {
                printf("Failed");
                return 0;
            }
        }
    }


    // printf("encode : %s\n", encode);
    int lencode = strlen(encode);
    for (int i = 0; i < lencode; ++i) {
        printf("%c", dict[encode[i] - 'A']);
    }
    // printf("\n");

    return 0;
}
