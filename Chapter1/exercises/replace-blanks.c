#include <stdio.h>

/* Exercice 1-9 page 22 of the book of c 
    Prints std input to the output but multiple blanks by a single blank */
int main()
{
    int c, last_c;

    while ((c = getchar()) != EOF)
    {
        // If the last character and a current one are both a blank, do not send this one to output 
        if (c != ' ')
            putchar(c);    

        last_c = c; // Stores the last character sent to output
    }
    
    return 0;
}
