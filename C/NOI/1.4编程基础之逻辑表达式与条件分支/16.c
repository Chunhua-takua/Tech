#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    // 16:三角形判断
    int n1 = 3;
    int n2 = 4;
    int n3 = 5;
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 + n2 <= n3 ||
        n1 + n3 <= n2 ||
        n2 + n3 <= n1) {
        printf("no");
    }
    else {
        printf("yes");
    }
        
    return 0;
}