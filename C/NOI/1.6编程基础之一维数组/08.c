// 08:石头剪刀布
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int arrA[100];
int arrB[100];
int arrR[100];

int main() {
    int n, na, nb;
    scanf("%d%d%d", &n, &na, &nb);

    for (int i = 0; i < n; ++i) {
        if (i < na) {
            scanf("%d", &arrA[i]);
        }
        else {
            arrA[i] = arrA[i % na];
        }
        
    }

    for (int i = 0; i < n; ++i) {
        if (i < nb) {
            scanf("%d", &arrB[i]);
        }
        else {
            arrB[i] = arrB[i % nb];
        }
    }

    for (int i = 0; i < n; ++i) {
        if (arrA[i] == 0 && arrB[i] == 2
            || arrA[i] == 2 && arrB[i] == 5
            || arrA[i] == 5 && arrB[i] == 0) {
            // a wins
            arrR[i] = -1;
        } 
        else if (arrB[i] == 0 && arrA[i] == 2
            || arrB[i] == 2 && arrA[i] == 5
            || arrB[i] == 5 && arrA[i] == 0) {
            // b wins
            arrR[i] = 1;
        }
        else {
            // draw
            arrR[i] = 0;
        }
    }

    int countA = 0;
    int countB = 0;
    for (int i = 0; i < n; ++i) {
        switch (arrR[i]) {
            case -1:
                ++countA;
                break;
            case 1:
                ++countB;
                break;
        }
    }

    if (countA > countB)
        printf("A");
    else if (countA < countB)
        printf("B");
    else
        printf("draw");
    
    return 0;
}
