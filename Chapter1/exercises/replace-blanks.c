#include <stdio.h>

/* Exercice 1-9 page 22 of the book of c 
    Prints std input to the output but replaces multiple blanks by a single blank */
int main()
{
    int c, last_c = "a";

    while ((c = getchar()) != EOF)
    {
        // If the last character wasn't a blank, or if the current character isn't a blank, or both, print the current character
        if (last_c != ' ' || c != ' ')
            putchar(c);
        
        last_c = c; // Stores the last character sent to output
    }
    
    return 0;
}
