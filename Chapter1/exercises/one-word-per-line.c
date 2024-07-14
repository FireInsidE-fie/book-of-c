#include <stdio.h>

int main()
{
    int c, last_c = 0;

    while ((c = getchar()) != EOF)
    {
        if ((last_c != '\n' || last_c != '\t' || last_c != ' ') && (c == '\n' || c == '\t' || c == ' '))
        {
            printf("\n");
            last_c = '\n';
        }
        else
            last_c = putchar(c);
    }

    return 0;
}
