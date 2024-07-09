#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */

main() {
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;      // lower limit of temperature scale
    upper = 300;    // upper limit
    step = 20;      // step size

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9; 
        /* 
        * Conversion here ; the division is done at the end because 
        * otherwise the int type would truncate the value, making 5/9 become 0 
        */

        printf("%3d\t%3d\t+ %d\n", fahr, celsius, step);
        /*
        * formating here is just "intargument(width3) tab intargument(width3) tab+ intargument newline"
        */
        fahr = fahr + step;
    }
}
