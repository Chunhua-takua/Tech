// 01:与指定数字相同的数的个数
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int a[100];

int main() {
    int n = 3;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        int temp;
        scanf("%d", &temp);
        a[i] = temp;
    }
    
    int count = 0;
    int m;
    scanf("%d", &m);
    for (int i = 0; i < n; ++i) {
        if (m == a[i]) {
            ++count;
        }
    }

    printf("%d", count);

    return 0;
}
