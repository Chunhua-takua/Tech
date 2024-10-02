// 11:大整数减法
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int a[200];
int b[200];
const int N = 200;

char a_str[200];
char b_str[200];

int main() {
    scanf("%s", a_str);
    scanf("%s", b_str);

    int a_len = strlen(a_str);
    int b_len = strlen(b_str);

    for (int i = 0; i < a_len; ++i)
        a[i] = a_str[i] - '0';

    for (int i = 0; i < b_len; ++i) 
        b[i] = b_str[i] - '0';

    int carry = 0;
    int a_i = a_len - 1;
    int b_i = b_len - 1;
    for (int i = 0; i < a_len; ++i) {
        if (b_i - i >= 0)
            a[a_i - i] -= b[b_i - i];
    }

    for (int i = a_i; i > 0; i--) {
        if (a[i] < 0) {
            a[i - 1]--;
            a[i] += 10;
        }
    }

    int zero = 0;
    for (int i = 0; i < a_len; ++i) {
        zero += a[i];
        if (zero == 0) {
            continue;
        }

        printf("%d", a[i]);
    }

    if (zero == 0) {
        printf("0");
    }
    
    return 0;
}
