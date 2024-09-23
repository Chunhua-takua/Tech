#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // 31:开关灯

    int n = 10;
    int m = 1;
    scanf("%d%d", &n, &m);

    for (int i = 1; i < n + 1; ++i) {
        int count = 0;
        for (int j = 1; j < m + 1; ++j) {
            if (i % j == 0) {
                ++count;
            }
        }

        if (count % 2 == 1) {
            if (i == 1) {
                printf("%d", i);
            }
            else {
                printf(",%d", i);
            }
            
        }
    }

    return 0;
}
