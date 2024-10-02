// 13:大整数的因子
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#define NUM 30
int a[NUM];
char aString[NUM];
bool dividableByN(int a[NUM], int len, int divider);

int main() {
    scanf("%s", aString);
    int len = strlen(aString);
    for (int i = 0; i < len; ++i)
        a[i] = aString[i] - '0';
    
    // divide by 2, 4, 8
    int count2 = 0;
    for (int i = 0; i < 3; ++i) {
        if (dividableByN(a, len, 2)) 
            count2++;
    }
    // printf("count2:%d\n", count2);

    // divide by 3
    int count3 = 0;
    for (int i = 0; i < 2; ++i) {
        if (dividableByN(a, len, 3)) {
            count3++;
        }
    }

    // divide by 5
    int count5 = 0;
    if (dividableByN(a, len, 5)) 
        count5++;

    // divide by 7
    int count7 = 0;
    if (dividableByN(a, len, 7))
        count7++;

    if (count2 >= 1)
        printf("2 ");
    if (count3 >= 1)
        printf("3 ");
    if (count2 >= 2) 
        printf("4 ");
    if (count5 >= 1) 
        printf("5 ");
    if (count2 > 0 && count3 > 0)
        printf("6 ");
    if (count7 > 0)
        printf("7 ");
    if (count2 >= 3)
        printf("8 ");
    if (count3 >= 2)
        printf("9");
    
    if (count2 == 0 && count3 == 0 && count5 == 0 & count7 == 0)
        printf("none");

    return 0;
}

bool dividableByN(int a[NUM], int len, int divider) {
    int sum = 0;
    switch (divider) {
        case 2:
            if (a[len - 1] % 2 != 0)
                return false;
            break;
        case 3:
            for (int i = 0; i < len; ++i)
                sum += a[i];
            if (sum % 3 != 0) {
                return false;
            }
            break;
        case 5:
            if (a[len - 1] != 0 && a[len - 1] != 5)
                return false;
            break;
    }
    
    int remainder = 0;
    for (int i = 0; i < len; ++i) {
        int temp = a[i] + remainder * 10;
        if (temp >= divider) {
            remainder = temp % divider;
            a[i] = temp / divider;
        }
        else {
            remainder = a[i];
            a[i] = 0;
        }
    }

    if (remainder == 0)
        return true;
    else
        return false;
}
