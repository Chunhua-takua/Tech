// 14:求10000以内n的阶乘
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#define NUM 100000
int a[NUM];

void print(int a[NUM], int start);

int main() {
    int n = 19;
    scanf("%d", &n);

    a[NUM - 1] = 1;

    if (n == 0) {
        printf("1");
        return 0;
    }

    int start = NUM - 1;
    int carry = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = NUM - 1; j >= start; --j) {
            int temp = i * a[j] + carry;
            if (temp < 10) {
                a[j] = temp;
                carry = 0;
            }
            else {
                a[j] = temp % 10;
                carry = temp / 10;
            }
        }

        while (carry > 0) {
            --start;
            a[start] = carry % 10;
            carry /= 10;
        }
    }

    print(a, start);
    
    return 0;
}

void print(int a[NUM], int start) {
    for (int i = start; i < NUM; ++i) 
        printf("%d", a[i]);
}

