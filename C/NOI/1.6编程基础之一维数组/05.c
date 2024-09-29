// 05:年龄与疾病
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int age[100];

int main() {
    int n;
    scanf("%d", &n);

    int c1 = 0; 
    int c2 = 0;
    int c3 = 0;
    int c4 = 0;
    for (int i = 0; i < n; ++i) {
        int temp;
        scanf("%d", &temp);
        // age[i] = temp;
        if (temp >= 0 && temp <= 18) {
            c1++;
        }
        else if (temp <= 35) {
            c2++;
        }
        else if (temp <= 60) {
            c3++;
        }
        else {
            c4++;
        }
    }

    int t = c1 + c2 + c3 + c4;
    printf("%.2lf%%\n%.2lf%%\n%.2lf%%\n%.2lf%%", 
        (double) c1 / t * 100.0,
        (double) c2 / t * 100.0,
        (double) c3 / t * 100.0,
        (double) c4 / t * 100.0);
    
    return 0;
}
