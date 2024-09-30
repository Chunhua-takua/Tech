// 07:有趣的跳跃
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int a[3000];
int b[3000];

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; ++i) {
        int temp = abs(a[i] - a[i + 1]);
        b[temp] = 1;

    }

    for (int i = 1; i <= n - 1; ++i) {
        if (b[i] != 1) {
            printf("Not jolly");
            return 0;
        }
    }
    printf("Jolly");
    
    return 0;
}
