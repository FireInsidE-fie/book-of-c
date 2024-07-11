#include <stdio.h>

/* Exercise 1-5 of the book of C */
/* Print the conversion table from Fahrenheit to Celsius but with a for loop */

main() {
    int fahr;
    char header[] = "Conversion table from Fahrenheit to Celsius";
    
    printf("%s\n", header);

    for (fahr = 300; fahr >= 0; fahr = fahr - 20) {
        printf("%3d\t%3.1f\n", fahr, (fahr-32.0) * (5.0/9.0));
    }
}
