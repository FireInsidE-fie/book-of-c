#include <stdio.h>

#define N_CHARACTER 5

/* Exercise 1-14 page 25 of the book of C
    print a histogram of the frequency of different characters in input */
int main(void)
{
    int i;  // While loop operator
    int c;  // Contains a character in while loops
    int frequencies[N_CHARACTER] = {0};

    while ((c = getchar()) != EOF)
    {
        putchar(c);
    }
    
    
    return 0;
}

