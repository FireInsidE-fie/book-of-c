#include <stdio.h>

/* count lines in input */
main() {
    int c, nl;

    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')  // '\n' is in single quotes to represent the new line ASCII character (LF) 
            ++nl;
    
    printf("%d\n", nl);
}
