// 03:基因相关性
#include <stdio.h>
// #include <math.h>
#include <string.h>
// #include <stdbool.h>

#define NUM 500
char dna1[NUM];
char dna2[NUM];

int main() {
    double threshold;
    scanf("%lf", &threshold);
    scanf("%s", dna1);
    scanf("%s", dna2);
    
    int len = strlen(dna1);
    int count = 0;

    for (int i = 0; i < len; ++i) {
        if (dna1[i] == dna2[i])
            ++count;
    }

    if ((double) count / len >= threshold)
        printf("yes");
    else
        printf("no");

    return 0;
}

