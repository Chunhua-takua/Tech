#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // 20:球弹跳高度的计算
    int h = 20;
    scanf("%d", &h);

    double path = 0;
    double height = h;
    for (int i = 0; i < 10; ++i) {
        if (i == 9) {
            path += height;
        }
        else {
            path += 1.5 * height;
        }
        height *= 0.5;
        
    }
    printf("%g\n%g", path, height);

    return 0;
}

