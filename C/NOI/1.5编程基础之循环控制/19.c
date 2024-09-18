#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // 19:救援
    int n = 1;
    scanf("%d", &n);

    double time = 0;;
    for (int i = 0; i < n; ++i) {
        double x, y;
        int people;
        scanf("%lf%lf%d", &x, &y, &people);

        double distance = sqrt(x * x + y * y);
        time += 2.0 * distance / 50 + people * 1.5;

    }
    // printf("%lf\n", time);
    printf("%.0lf\n", ceil(time)); // 向上取整
    // printf("%lf\n", ceil(19.1));

    return 0;
}

