/**
 * 06:笨小猴
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

#define MAX 200

bool isPrime(int n);

int main() {
    char str[MAX];
    scanf("%s", &str);

    int letters[26];
    for (int i = 0; i < 26; ++i)
        letters[i] = 0;
        

    for (int i = 0; i < strlen(str); ++i) {
        int temp = str[i] - 'a';
        letters[temp]++;
    }

    int maxn = -1;
    int minn = 1000;

    for (int i = 1; i < 26; ++i) {
        // printf("letteri: %d ", letters[i]);
        if (letters[i] == 0)
            continue;
        // printf("letter2: %d\n", letters[i]);
        maxn = maxn < letters[i] ? letters[i] : maxn;
        minn = minn > letters[i] ? letters[i] : minn;
    }

    if (isPrime(maxn - minn)) {
        printf("Lucky Word\n%d", maxn - minn);
    }
    else {
        printf("No Answer\n0");
    }

    return 0;
}


bool isPrime(int n) {
    if (n == 0 || n == 1)
        return false;

    // 埃拉托斯特尼筛选法
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
