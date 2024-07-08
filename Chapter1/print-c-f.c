#include <stdio.h>

/* Exercise 1-4 of the book of C */
/* Present a table for converting celsius values to fahrenheit equivalents */

main() {
    float lower, upper, step;
    float celsius, fahrenheit;
    char header[] = "Conversion table from celsius to fahrenheit";

    lower = -20.0;
    upper = 50.0;
    step = 5.0;

    celsius = lower;

    printf("%s\n", header);

    while (celsius <= upper)
    {
        fahrenheit = celsius * 9 / 5 + 32;
        printf("%3.0f\t%3.2f\t+ %2.0f\n", celsius, fahrenheit, step);

        celsius = celsius + step;
    }
}
