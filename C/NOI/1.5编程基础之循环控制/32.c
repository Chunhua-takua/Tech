#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // 32:求分数序列和

    int n = 2;
    scanf("%d", &n);

    int p = 1;
    int q = 2;
    double sum = 0;
    for (int i = 1; i < n + 1; ++i) {
        if (i == 1) {
            sum += 2;
            continue;
        }

        int temp = q;
        q = q + p;
        p = temp;
        // printf("q=%d, p=%d\n", q, p);
        sum += (double) q / p;
    }

    printf("%.4lf", sum);

    return 0;
}
