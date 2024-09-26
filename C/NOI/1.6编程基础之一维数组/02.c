// 02:陶陶摘苹果
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int n = 10;
    int heights[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &heights[i]);
    }

    int chair = 30;
    int hand;
    scanf("%d", &hand);

    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (chair + hand >= heights[i])
            count++;
    }
    
    printf("%d\n", count);

    return 0;
}