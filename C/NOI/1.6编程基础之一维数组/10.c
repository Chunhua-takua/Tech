// 10:大整数加法
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int a[200];
int b[200];
int c[201];
const int N = 200;

int main() {
    char ch = getchar();
    int max_len = 0;
    int a_len = 0;
    while (ch != '\n') {
        a[a_len] = ch - '0';
        ++a_len;
        ch = getchar();
    }
    max_len = a_len;

    ch = getchar();
    int b_len = 0;
    while (ch != '\n') {
        b[b_len] = ch - '0';
        ++b_len;
        ch = getchar();
    }
    max_len = max_len > b_len ? max_len : b_len;

    int carry = 0;
    int a_i = a_len - 1;
    int b_i = b_len - 1;
    for (int i = 0; i < max_len; ++i) {
        int temp;
        if (a_i >= 0 && b_i >= 0) {
            temp = a[a_i] + b[b_i] + carry;
        }
        else if (a_i < 0 && b_i >= 0) {
            temp = b[b_i] + carry;

        }
        else if (a_i >= 0 && b_i < 0) {
            temp = a[a_i] + carry;
        }

        if (temp > 9) {
            c[N - i] = temp % 10;
            carry = 1;
        }
        else {
            c[N - i] = temp;
            carry = 0;
        }

        --a_i;
        --b_i;
    }

    if (carry == 1)
        c[N - max_len] = 1;

    // print sum
    int zero = 0;
    // printf("max_len:%d\n", max_len);
    for (int i = 0; i < N + 1; ++i) {
        zero += c[i];
        if (zero == 0) {
            continue;
        }

        printf("%d", c[i]);
    }

    if (zero == 0) {
        printf("0");
    }
    
    return 0;
}
