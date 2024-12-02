/**
 * 08:白细胞计数
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>
#include <float.h>

#define MAX 500

int main() {
    int n;
    scanf("%d", &n);

    double arr[MAX];

    double max = 0;
    int max_i = -1;
    double min = DBL_MAX;
    int min_i = -1;
    for (int i = 0; i < n; ++i) {
        scanf("%lf", &arr[i]);

        if (max < arr[i]) {
            max = arr[i];
            max_i = i;
        }
        // max = max < arr[i] ? arr[i] : max;

        if (min > arr[i]) {
            min = arr[i];
            min_i = i;
        }
        // min = min > arr[i] ? arr[i] : min;
    }

    double sum = 0;
    
    for (int i = 0; i < n; ++i) {
        if (i == max_i || i == min_i) 
            continue;
        
        sum += arr[i];
        // bias = bias < arr[i] ? arr[i] : bias;
    }

    double average = sum / (n - 2);

    double bias = 0;
    for (int i = 0; i < n; ++i) {
        if (i == max_i || i == min_i)
            continue;

        // double temp = abs(arr[i] - average);
        bias = bias < fabs(arr[i] - average) ? fabs(arr[i] - average) : bias;
    }


    printf("%.2f %.2f", average, bias);

    return 0;
}
