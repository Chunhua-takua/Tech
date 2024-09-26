#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // 42:画矩形

    int height = 4;
    int width = 3;
    char ch = '@';
    int flag = 0;
    scanf("%d%d %c%d", &height, &width, &ch, &flag);

    if (flag == 1) {
        for (int i = 0; i < height; ++i) {
            for (int j = 0; j < width; ++j) {
                printf("%c", ch);
            }
            printf("\n");
        }
    }
    else if (flag == 0) {
        for (int i = 0; i < height; ++i) {
            for (int j = 0; j < width; ++j) {
                if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                    printf("%c", ch);
                }                    
                else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }

    return 0;
}
