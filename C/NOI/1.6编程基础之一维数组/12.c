// 12:计算2的N次方
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#define NUM 100
int a[NUM];
void doubleNum(int a[NUM]);

int main() {
    int n = 100;
    scanf("%d", &n);
    
    a[99] = 2;

    for (int i = 0; i < n - 1; ++i) {
        doubleNum(a);
    }

    int zero = 0;
    for (int i = 0; i < NUM; ++i) {
        zero += a[i];
        if (zero == 0) {
            continue;
        }

        printf("%d", a[i]);
    }

    return 0;
}

void doubleNum(int a[NUM]) {
    int carry = 0;
    for (int i = NUM - 1; i >= 0; --i) {
        int temp = 2 * a[i] + carry;
        if (temp >= 10) {
            a[i] = temp % 10;
            carry = 1;
        }
        else {
            a[i] = temp;
            carry = 0;
        }
    }
}