#include <stdio.h>

/* print Fahrenheit-Celsius table
	for fahr = 0, 20, ..., 300 */

main() {
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;      /* lower limit of temperature scale */
	upper = 300;    /* upper limit */
	step = 20;      /* step size */

	fahr = lower;
	while (fahr <= upper)
	{
		celsius = 5 * (fahr - 32) / 9; /* Converts here */
		printf("%d\t%d\t + %d\n", fahr, celsius, step);
		/* formating here is just "variable tab variable + variable newline" */
		fahr = fahr + step;
	}
}
