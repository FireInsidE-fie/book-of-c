#include <stdio.h>

/* print Fahrenheit-Celsius table (float version)
    for fahr = 0, 20, ..., 300 */

main() {
    float fahr, celsius;
    float lower, upper, step;
    char heading[] = "Table of conversions from fahrenheit to celsius";

    lower = 0;      // lower limit of temperature scale
    upper = 300;    // upper limit
    step = 20;      // step size

    fahr = lower;

    printf("%s\n", heading);
    while (fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr-32.0);
        // Conversion here; we actually use the fraction this time since it's floats

        printf("%3.0f\t%3.2f\t+ %2.0f\n", fahr, celsius, step);
        /*
        *   formating here is just "intargument(width3 and no decimal) tab 
        *   intargument(width3 and decimal width2) tab+ 
        *   intargument (width 2 and no decimal) newline"
        */
        fahr = fahr + step;
    }
}
