#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // 16:买房子
    int n = 50, k = 10;
    scanf("%d%d", &n, &k);

    double price;
    int deposit = 0;

    int year;
    for (year = 0; year < 21; ++year) {
        if (year == 0) {
            price = 200;
        }
        else {
            price *= 1.0 + k / 100.0;
        }
         
        deposit += n;
        // printf("price: %lf\n", price);
        // printf("deposit: %d\n", deposit);

        if (deposit >= price) {
            break;
        }
    }

    if (year <= 20) {
        printf("%d", year + 1);
    }
    else {
        printf("Impossible");
    }

    return 0;
}

