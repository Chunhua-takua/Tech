#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // 38:计算多项式的导函数

    int m = 1;
    // scanf("%d", &m);
    
    for (int i = 0; i < m; ++i) {
        // 最高幂
        int n;
        scanf("%d", &n);

        for (int j = n; j >= 0; --j) {
            int c_temp;
            scanf("%d", &c_temp);
            int c = c_temp * j;
            // printf("j=%d\n", j);

            if (j == 0 && c == 0 && n != 0)
                break;

            printf("%d ", c);
        }
        printf("\n");
    }
    
    return 0;
}
