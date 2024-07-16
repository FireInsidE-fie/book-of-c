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
        if ((state == IN) && (c == ' ' || c == '\t' || c == '\n'))
        {
            putchar('\n');
            state = OUT;
        }
        else
        {
            putchar(c);
            state = IN;
        }
    }

    return 0;
}
