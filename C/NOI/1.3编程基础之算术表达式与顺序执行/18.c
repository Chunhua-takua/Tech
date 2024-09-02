#include <stdio.h>
#include <math.h>

const double PI = 3.14159;

int main() {
    // 18:等差数列末项计算
    int a1 = 1;
    int a2 = 4;
    int n = 100;
    scanf("%d%d%d", &a1, &a2, &n);

    int step = a2 - a1;

    int a_n = a1 + step * (n - 1);

    printf("%d\n", a_n); 

    return 0;
}