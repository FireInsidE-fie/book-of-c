#include <stdio.h>

/* A simpler version of the unix `cat` command. This will print
    the contents of a file one character at a time if you redirect
    its contents to the program via the command line */

int main() {
    int c;

    while(1) {
        c = getchar();

        putchar(c);

        if (c == EOF) {
            return 0;
        }
    }

    return 0;
}
