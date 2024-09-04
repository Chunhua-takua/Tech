#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    // 02:输出绝对值
    float n = -3.1454;
    scanf("%f", &n);

    if (n < 0) {
        n = -n;
    }

   printf("%.2f", n) ;
    return 0;
}