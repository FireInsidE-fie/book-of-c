#include <stdio.h>

// #define EOF EOF

/* Exercise 1-6 and 1-7 : Print the value of EOF and verify
    that getchar() != EOF is 0 or 1 */

int main() {
    // I know this is horrendous practice but it's just a test
    while (1) {
        int c = getchar();

        if (c == EOF) {
            return 0;
        }

        putchar(c);
    }

    printf("%d\n", (getchar() != EOF));

    printf("EOF's value is: %d\n", EOF);

    return 0;
}
