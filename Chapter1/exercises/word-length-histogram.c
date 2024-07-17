#include <stdio.h>

#define IN 1  // inside a word
#define OUT 2  // outside a word

/* Exercise 1-13 page 25 of the book of C
    Draw a histogram of the length of the words inputted */
int main()
{
    int c = 'a', n_words = 0, state = 0;

    /* count words */
    while ((c = getchar()) != EOF)
    {
        putchar(c);

        if (c == ' ' || c == '\t' || c == '\n')
        {
            state = OUT;
        }
        else if (state != IN)
        {
            state = IN;
            ++n_words;
        }
    }
    
    printf("Number of words: %d", n_words);

    /* print histogram */

    return 0;
}
