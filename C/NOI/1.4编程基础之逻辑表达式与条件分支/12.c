#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    // 12:骑车与走路
    int distance = 120;
    scanf("%d", &distance);

    double time_bike = 27.0 + 23.0 + distance / 3.0;
    double time_walk = distance / 1.2;
    if (time_bike < time_walk) {
        printf("Bike");
    }
    else if (time_bike > time_walk) {
        printf("Walk");
    }
    else {
        printf("All");
    }

    return 0;
}