#include <stdio.h>

#define IN 1   // Inside a word
#define OUT 2  // Outside a word

/* Exercise 1-12, page 23 of the book of C, second, better version
    prints all input to output, one word per line */
int main()
{
    int c, state = IN;

    while ((c = getchar()) != EOF)
    {
        // Test if inside a word or not
        if (c == ' ' || c == '\t' || c == '\n')
        {
            state = OUT;
        }
        else
        {
            state = IN;
        }

        // Put character depending on state
        if (state == IN)
        {
            putchar(c);
        }
        else if (state == OUT)
        {
            putchar('\n');
        }
    }

    return 0;
}
