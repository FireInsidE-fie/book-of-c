#include <stdio.h>

/* Exercice 1-9 page 22 of the book of c 
    Prints std input to the output but replaces multiple blanks by a single blank */
int main()
{
    int c, last_c;

    while ((c = getchar()) != EOF)
    {
        // If the last character was a blank but this one isn't, send a blank
        if (last_c == ' ' && c != ' ')
            printf(" ");

        if (c != ' ')
        {
            putchar(c);            
        }
        
        last_c = c; // Stores the last character sent to output
    }
    
    return 0;
}
