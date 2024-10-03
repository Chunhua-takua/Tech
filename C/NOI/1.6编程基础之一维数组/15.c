// 15:阶乘和
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#define NUM 10000
int a[NUM];
int s[NUM];

int headS = NUM - 1;
int headA = NUM - 1;
int carry = 0;


void multiplyN(int n);
void add();
void print(int a[NUM], int headS);

int main() {
    int n = 5;
    scanf("%d", &n);

    a[NUM - 1] = 1;

    for (int i = 1; i <= n; ++i) {
        multiplyN(i);
        add();
    }
    
    // printf("headS=%d\nheadA=%d\n", headS, headA);

    print(s, headS);
    
    return 0;
}

void multiplyN(int n) {
    int i = n;
    for (int j = NUM - 1; j >= headA; --j) {
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
        --headA;
        a[headA] = carry % 10;
        carry /= 10;
    }
}

void add() {
    headS = headS < headA ? headS : headA;

    int carry = 0;
    for (int i = NUM - 1; i >= headA; --i) {
        int temp = s[i] + a[i] + carry;
        if (temp < 10) {
            s[i] = temp;
            carry = 0;
        }
        else {
            s[i] = temp % 10;
            carry = temp / 10;
        }
    }

    while (carry > 0) {
        --headS;
        s[headS] = carry % 10;
        carry /= 10;
    }
}

void print(int a[NUM], int headS) {
    for (int i = headS; i < NUM; ++i) 
        printf("%d", a[i]);
}
