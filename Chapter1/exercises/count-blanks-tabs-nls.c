#include <stdio.h>

/* Exercise 1-8, page 22 of the book of C */

int main()
{
    int c, c_blank, c_tabs, c_nls = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            ++c_blank;
            printf("1"); // Debug
        }

        if (c == '\t')
        {
            ++c_tabs;
            printf("2"); // Debug
        }

        if (c == '\n')
        {
            ++c_nls;
            printf("3"); // Debug
        }
    }

    printf("Number of blanks: %d\nNumber of tabs: %d\nNumber of new lines: %d\n", c_blank, c_tabs, c_nls);
    
    return 0;
}
