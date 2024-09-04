#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // 19:简单计算器
    // 1 2 +
    // 1 4 -
    int x = 1;
    int y = 11;
    char op = '/';

    scanf("%d%d %c", &x, &y, &op);
    // getchar();
    // op = getchar();

    // printf("%d%d%c\n", x, y, op);

    int r = 0;
    bool valid = true;

    switch (op) {
        case '+':
            r = x + y;
            break;
        case '-':
            r = x - y;
            break;
        case '*':
            r = x * y;
            break;
        case '/':
            if (0 == y) {
                valid = false;
                printf("Divided by zero!");
            }
            else {
                r = x / y;
            }
            break;
        default:
            valid = false;
            printf("Invalid operator!");
            break;
    }


    if (valid) {
        printf("%d", r);
    }

    return 0;
}