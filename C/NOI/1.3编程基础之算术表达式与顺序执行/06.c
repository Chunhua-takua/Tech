#include <stdio.h>

int main() {
    // 06:甲流疫情死亡率
    int a = 10433;
    int b = 60;
    scanf("%d%d", &a, &b);

    double r = (double) b / (a) * 100.0;


    printf("%.3lf%%\n", r);

    return 0;
}