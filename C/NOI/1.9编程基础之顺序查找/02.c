/**
 * 02:输出最高分数的学生姓名
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

#define MAX 100

struct Student {
    int score;
    char name[21]; // string 类型，最后有 \0
};

int main() {
    int n;
    scanf("%d", &n);

    struct Student students[MAX];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &students[i].score);
        scanf("%s", &students[i].name);
    }

    int maxScore = -1;
    int maxI = -1;
    for (int i = 0; i < n; ++i) {
        if (maxScore < students[i].score) {
            maxScore = students[i].score;
            maxI = i;
        }
    }

    printf("%s", students[maxI].name);

    return 0;
}
