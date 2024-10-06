// 04:石头剪子布
#include <stdio.h>
// #include <math.h>
#include <string.h>
// #include <stdbool.h>

#define NUM 10
// char dna1[NUM];
// char dna2[NUM];

int main() {
    int n;
    scanf("%d", &n);
    
    char option1[NUM];
    char option2[NUM];

    for (int i = 0; i < n; ++i) {
        scanf("%s %s", option1, option2);

        if (option1[0] == 'R') {
            switch (option2[0]) {
                case 'R' :
                    printf("Tie\n");
                    break;
                case 'S' :
                    printf("Player1\n");
                    break;
                case 'P':
                    printf("Player2\n");
                    break;
            }
        }
        else if (option1[0] == 'S') {
            switch (option2[0]) {
                case 'R' :
                    printf("Player2\n");
                    break;
                case 'S' :
                    printf("Tie\n");
                    break;
                case 'P':
                    printf("Player1\n");
                    break;
            }
        }
        else if (option1[0] == 'P') {
            switch (option2[0]) {
                case 'R' :
                    printf("Player1\n");
                    break;
                case 'S' :
                    printf("Player2\n");
                    break;
                case 'P':
                    printf("Tie\n");
                    break;
            }
        }
    }

    return 0;
}

