#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // 12:与指定数字相同的数的个数
    int n, m;
    scanf("%d%d", &n, &m);

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        int temp;
        scanf("%d", &temp);
        if (m == temp) {
            sum++;
        }
    }

    printf("%d", sum);

    return 0;
}

