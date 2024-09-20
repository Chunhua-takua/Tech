#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

bool isSPNormal(int n);
bool isDPNormal(int n);

int main() {
    // 24:正常血压
    int n;
    scanf("%d", &n);

    int max = 0;
    int temp = 0;
    for (int i = 0; i < n; ++i) {
        int sp, dp;
        scanf("%d%d", &sp, &dp);

        if (isSPNormal(sp) && isDPNormal(dp)) {
            ++temp;
        }
        else {
            max = max > temp ? max : temp;
            temp = 0;
        }
    }
    max = max > temp ? max : temp;

    printf("%d", max);
    return 0;
}

bool isSPNormal(int n) {
    if (n >= 90 && n <= 140) {
        return true;
    }
    return false;
}

bool isDPNormal(int n) {
    if (n >= 60 && n <= 90) {
        return true;
    }
    return false;
}