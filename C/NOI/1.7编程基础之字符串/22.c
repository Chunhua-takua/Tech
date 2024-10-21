// 22:紧急措施
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#define NUM 255

char my_email[NUM];
char uname[NUM];
char password[NUM];
char email[NUM];

// 返回类型写为 bool，报 runtime error
// 有返回的函数必须所有路径有返回(如果函数有返回值，则必须所有路径有返回，哪怕这个路径可能不会执行)
void reversePassword(char* password);

int main() {
    fgets(my_email, NUM, stdin);
    int len = strlen(my_email) - 1;
    if (my_email[len] == '\n')
        my_email[len] = '\0';

    int n;
    scanf("%d", &n);
    int count = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%s %s %s", uname, password, email);

        if (strcmp(my_email, email) == 0) {
            reversePassword(password);
            printf("%s %s\n", uname, password);
            ++count;
        }
    }

    if (0 == count)
        printf("empty");

    return 0;
}

void reversePassword(char* password) {
    int bias = 'a' - 'A';
    int len = strlen(password);
    for (int i = 0; i < len; ++i) {
        if (password[i] >= 'a' && password[i] <= 'z')
            password[i] -= bias;
        else if (password[i] >= 'A' && password[i] <= 'Z')
            password[i] += bias;
    }
}
