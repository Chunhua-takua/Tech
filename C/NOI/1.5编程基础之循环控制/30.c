#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int count3(int n);

int main() {
    // 30:含k个3的数

    int m = 39331;
    int k = 3;
    scanf("%d%d", &m, &k);
    
    if (count3(m) == k && m % 19 == 0) {
        printf("YES");
    }
    else {
        printf("NO");
    }

    return 0;
}

int count3(int n) {
    int count = 0;
    while (n > 0) {
        int temp = n % 10;
        n /= 10;
        if (temp == 3) {
            ++count;
        }
    }

    return count;

}