#include <stdio.h>

#define STEP 20;

int c;  // Contains the Celsius temperature

float convert_f_c(int temp);

/* Exercise 1-15 page 28 of the book of c
    Print the  */

int main(void)
{
    c = 0;
    while (c <= 200)
    {
        printf("%3d\t%3.1f\n", c, convert_f_c(c));
        c = c + STEP;
    }
    
    return 0;
}

/* convert_f_c: Convert a fahrenheit value to a celsius value */
float convert_f_c(int temp)
{
    return (temp - 32.0) * 5.0 / 9.0; 
}
