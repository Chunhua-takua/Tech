#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    // 01:判断数正负
    int n = -1;
    scanf("%d", &n);

    char neg[20] = "negative";
    char zero[10] = "zero";
    char pos[10] = "positive";

    if (n < 0) {
        printf("%s\n", neg);
    }
    else if (n == 0) {
        printf("%s\n", zero);
    }
    else {
        printf("%s\n", pos);
    }
    
    return 0;
}