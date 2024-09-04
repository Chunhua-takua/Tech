#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // 20:求一元二次方程的根
    float a = 1;
    float b = 0;
    float c = 1;
    scanf("%f%f%f", &a, &b, &c);

    float temp = b * b - 4 * a * c;
    if (temp == 0) {
        float x1 = (-b + sqrt(temp)) / (2 * a);
        printf("x1=x2=%.5f", x1);
    }
    else if (temp > 0) {
        float x1 = (-b + sqrt(temp)) / (2 * a);
        float x2 = (-b - sqrt(temp)) / (2 * a);
        printf("x1=%.5f;x2=%.5f", x1, x2);
    }
    else {
        float real = 0 - b / (2 * a);
        float imagin = sqrt(4*a*c-b*b) / (2*a);
        printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi", real, imagin, real, imagin);
    }

    return 0;
}