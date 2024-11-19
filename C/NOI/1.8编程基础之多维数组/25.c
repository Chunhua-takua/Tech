/**
 * 25:螺旋加密
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

#define MAX 100

struct Dictionary {
    char key;
    char value[10];
};
struct Dictionary dict[27];

char* getValue(struct Dictionary dict[27], char ch);

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    char str[MAX];
    getchar();
    fgets(str, MAX, stdin);
    int len = strlen(str) - 1;

    dict[0].key = ' ';
    strcpy(dict[0].value, "00000");
    dict[1].key = 'A';
    strcpy(dict[1].value, "00001");
    dict[2].key = 'B';
    strcpy(dict[2].value, "00010");
    dict[3].key = 'C';
    strcpy(dict[3].value, "00011");
    dict[4].key = 'D';
    strcpy(dict[4].value, "00100");
    dict[5].key = 'E';
    strcpy(dict[5].value, "00101");
    dict[6].key = 'F';
    strcpy(dict[6].value, "00110");
    dict[7].key = 'G';
    strcpy(dict[7].value, "00111");
    dict[8].key = 'H';
    strcpy(dict[8].value, "01000");
    dict[9].key = 'I';
    strcpy(dict[9].value, "01001");
    dict[10].key = 'J';
    strcpy(dict[10].value, "01010");
    dict[11].key = 'K';
    strcpy(dict[11].value, "01011");
    dict[12].key = 'L';
    strcpy(dict[12].value, "01100");
    dict[13].key = 'M';
    strcpy(dict[13].value, "01101");
    dict[14].key = 'N';
    strcpy(dict[14].value, "01110");
    dict[15].key = 'O';
    strcpy(dict[15].value, "01111");
    dict[16].key = 'P';
    strcpy(dict[16].value, "10000");
    dict[17].key = 'Q';
    strcpy(dict[17].value, "10001");
    dict[18].key = 'R';
    strcpy(dict[18].value, "10010");
    dict[19].key = 'S';
    strcpy(dict[19].value, "10011");
    dict[20].key = 'T';
    strcpy(dict[20].value, "10100");
    dict[21].key = 'U';
    strcpy(dict[21].value, "10101");
    dict[22].key = 'V';
    strcpy(dict[22].value, "10110");
    dict[23].key = 'W';
    strcpy(dict[23].value, "10111");
    dict[24].key = 'X';
    strcpy(dict[24].value, "11000");
    dict[25].key = 'Y';
    strcpy(dict[25].value, "11001");
    dict[26].key = 'Z';
    strcpy(dict[26].value, "11010");

    int x = 0;
    int y = 0;
    char m[MAX][MAX];
    for (int i = 0; i < MAX; ++i)
        for (int j = 0; j < MAX; ++j)
            m[i][j] = '0';

    int margin_top = 0;
    int margin_bottom = r - 1;
    int margin_left = 0;
    int margin_right = c - 1;
    int direction = 0;
    char* digits = (char*) malloc(sizeof(char) * 5 * strlen(str));
    for (int i = 0; i < len; ++i) {
        char* value = getValue(dict, str[i]);
        for (int j = 0; j < 5; ++j) {
            switch (direction) {
                case 0: // right
                    if (y < margin_right) {
                        m[x][y] = value[j];
                        ++y;
                    }
                    else if (y == margin_right) {
                        m[x][y] = value[j];
                        direction = 1;
                        ++margin_top;
                        ++x;
                    }
                    break;
                case 1: // down
                    if (x < margin_bottom) {
                        m[x][y] = value[j];
                        ++x;
                    }
                    else if (x == margin_bottom) {
                        m[x][y] = value[j];
                        direction = 2;
                        margin_right--;
                        --y;
                    }
                    break;
                case 2: // left
                    if (y > margin_left) {
                        m[x][y] = value[j];
                        y--;
                    }
                    else if (y == margin_left) {
                        m[x][y] = value[j];
                        direction = 3;
                        margin_bottom--;
                        --x;
                    }
                    break;
                case 3: // up
                    if (x > margin_top) {
                        m[x][y] = value[j];
                        x--;
                    }
                    else if (x == margin_top) {
                        m[x][y] = value[j];
                        direction = 0;
                        margin_left++;
                        ++y;
                    }
                    break;
            }
        }
    }

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j)
            printf("%c", m[i][j]);
        // printf("\n");
    }
        
    return 0;
}

char* getValue(struct Dictionary dict[27], char ch) {
    for (int i = 0; i < 27; ++i) {
        if (dict[i].key == ch)
            return dict[i].value;
    }
    return NULL;
}