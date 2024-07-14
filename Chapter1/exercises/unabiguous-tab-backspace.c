#include <stdio.h>

/* exercise 1-10, page 22 of the book of c
    print intut to output but replace tabs with \t, backspace with \b and backslash with \\ */
int main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        // Replace tabs with "\t"
        if (c == '\t')
        {
            printf("\\t");
        }
        // Replace backspaces with "\b"
        else if (c == '\b')
        {
            printf("\\b");
        }
        // Replace a backslash with "\\"
        else if (c == '\\')
        {
            printf("\\\\");
        }
        // For everything else, print the character as is
        else {
            putchar(c);
        }
    }
        
    
    return 0;
}
