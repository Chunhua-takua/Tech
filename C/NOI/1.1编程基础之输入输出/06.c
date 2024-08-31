#include <stdio.h>

int main() {
    // 06:空格分隔输出

    char ch = 'a';
    int n = 12;
    float a = 2.3;
    double b = 3.2;
    scanf("%c %d %f %lf", &ch, &n, &a, &b);
    
    printf("%c %d %.6f %.6lf\n", ch, n, a, b);
    return 0;
}