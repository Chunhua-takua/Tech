#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // 27:级数求和

    int k;
    scanf("%d", &k);

    int n = 1;
    double s = 1;

    while (s <= k) {
        ++n;
        s += 1.0 / n;
    }

    printf("%d", n);
    return 0;
}
