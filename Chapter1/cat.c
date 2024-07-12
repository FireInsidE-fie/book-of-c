#include <stdio.h>

/* A simpler version of the unix `cat` command. This will print
    the contents of a file one character at a time if you redirect
    its contents to the program via the command line
    Example usage : `./cat.o < file.txt` */

int main() {
    int c;

    while ((c = getchar()) != EOF)
        putchar(c);

    return 0;
}
