// 07:配对碱基链
#include <stdio.h>
// #include <math.h>
#include <string.h>
#include <stdbool.h>

#define NUM 255
char dna[NUM];
char dna_c[NUM];

int main() {
    fgets(dna, NUM, stdin);

    int len = strlen(dna) - 1;

    for (int i = 0; i < len; ++i) {
        switch (dna[i]) {
            case 'A' : dna_c[i] = 'T';
                break;
            case 'T' : dna_c[i] = 'A';
                break;
            case 'C' : dna_c[i] = 'G';
                break;
            case 'G' : dna_c[i] = 'C';
                break;
        }

    }

    printf("%s", dna_c);

    return 0;
}
