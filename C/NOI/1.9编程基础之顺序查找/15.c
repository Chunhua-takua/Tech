/**
 * 15:接水问题
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

#define MAX 10000

int taps[100];
int students[MAX];

bool isExistNotZero(int taps[100], int size);

int main() {
    int n; // students
    int m; // taps
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; ++i) {
        scanf("%d", &students[i]);
    }

    // init taps
    for (int i = 0; i < m; ++i) {
        taps[i] = students[i];
    }

    int time = 0;
    int p = m;
    while (isExistNotZero(taps, m)) {
        for (int i = 0; i < m; ++i) {
            if (taps[i] == 1) {
                --taps[i];
                if (p <= n - 1) {
                    taps[i] = students[p];
                    ++p;
                }
            }
            else if (taps[i] > 1) {
                --taps[i];
            }
            else if (taps[i] == 0 && p <= n - 1) {
                taps[i] = students[p];
                ++p;
            }
        }
        ++time;
    }

    printf("%d", time);

    return 0;
}

bool isExistNotZero(int taps[100], int size) {
    for (int i = 0; i < size; ++i) {
        if (taps[i] > 0)
            return true;
    }
    return false;
}