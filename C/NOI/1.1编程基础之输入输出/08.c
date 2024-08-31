#include <stdio.h>

int main() {
    // char char;
    char ch = getchar();
    // scanf("%c", &ch);

    printf("  %c\n", ch);
    printf(" %c%c%c\n", ch, ch, ch);
    printf("%c%c%c%c%c\n", ch, ch, ch, ch, ch);

    return 0;
}