/**
 * 04:谁拿了最多奖学金
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

#define MAX 100

struct Student {
    char name[21]; // string 类型，最后有 \0
    int semester_avg_score;
    int class_review_socre;
    bool isLeader;
    bool isWest;
    int paper_no;
    int scholarship;
};

int getScholarship(struct Student student);

int main() {
    int n;
    scanf("%d", &n);

    struct Student students[MAX];
    for (int i = 0; i < n; ++i) {
        scanf("%s", &students[i].name);
        scanf("%d", &students[i].semester_avg_score);

        scanf("%d", &students[i].class_review_socre);

        char temp;
        scanf(" %c", &temp);
        students[i].isLeader = (temp == 'Y') ? true : false;
        scanf(" %c", &temp);
        students[i].isWest = (temp == 'Y') ? true : false;

        // int t;
        // scanf("%d", &t);
        // printf("t:%d\n", t);
        // students[i].paper_no = t;
        scanf("%d", &students[i].paper_no);


        students[i].scholarship = getScholarship(students[i]);

    }

    int max = -1;
    int index = -1;
    int total = 0;
    for (int i = 0; i < n; ++i) {
        total += students[i].scholarship;
        if (students[i].scholarship > max) {
            max = students[i].scholarship;
            index = i;
        }
    }

    printf("%s\n%d\n%d", students[index].name, students[index].scholarship, total);

    return 0;
}

int getScholarship(struct Student student) {
    int scholarship = 0;

    // yuanshi
    if (student.semester_avg_score > 80 && student.paper_no >= 1) {
        scholarship += 8000;
    }

    // wusi
    if (student.semester_avg_score > 85 && student.class_review_socre > 80) {
        scholarship += 4000;
    }
        

    // chengji youxiu
    if (student.semester_avg_score > 90) {
        scholarship += 2000;
    }

    // west
     if (student.semester_avg_score > 85 && student.isWest) {
         scholarship += 1000;
     }

    // class contribute
    if (student.class_review_socre > 80 && student.isLeader) {
        scholarship += 850;
    }

    return scholarship;
}