/**
 * 03:不高兴的津津
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

int main() {
    int time1, time2;
    int max = -1; 
    int day = -1;

    for (int i = 1; i <= 7; ++i) {
        scanf("%d %d", &time1, &time2);

        if (time1 + time2 > 8 && max < time1 + time2) {
            day = i;
            max = time1 + time2;
        }
            
    }

    if (day > -1) 
        printf("%d", day);
    else 
        printf("0");
        
    return 0;
}
