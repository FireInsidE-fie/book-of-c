#include <stdio.h>

// #define EOF EOF

/* Exercise 1-6 and 1-7 : Print the value of EOF and verify
    that getchar() != EOF is 0 or 1 */

int main() {
    // I know this is horrendous practice but it's just a test
    while (1) {
        int c = getchar();

        // Program will only terminate if EOF is returned by getchar()
        // This could be either through keyboard input (CTRL+D on unix)
        // or when reading a file if the end of file is reached
        // Errors in input also return an EOF signal
        if (c == EOF) {
            return 0;
        }

        putchar(c);
    }

    printf("%d\n", (getchar() != EOF));

    printf("EOF's value is: %d\n", EOF);

    return 0;
}
