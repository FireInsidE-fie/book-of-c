#include <stdio.h>

#define IN 1  // state inside a word
#define OUT 2  // state outside a word
#define MAX_WORDS 10  // max words in input
#define MAX_LENGTH 50  // max word length in input

/* Exercise 1-13 page 25 of the book of C
	Draw a histogram of the length of the words inputted (using arrays) */

/* NOTE TO SELF : DO NOT STORE THE WORDS, ONLY STORE THEIR LENGTH SO IT'S EASIER
	TO DRAW THE HISTOGRAM LATER (AND TAKES LESS MEMORY PRESUMABLY) */
int main()
{
	/* Get the words from the input - TO BE WRITTEN */
	/* Placeholder */

	char words[MAX_WORDS][MAX_LENGTH] = {"TEST1", "TEST2", "TEST3", "TEST4", 
	"TEST5", "TEST6", "TEST7", "TEST8", "TEST9", "TEST10"};

	/* Get the length for all the words - TO BE WRITTEN */


	/* Print out the histogram - TO BE WRITTEN */

	int i = 0;
	while (i < MAX_WORDS)
	{
		printf("%s\n", words[i]);  // debug
		++i;
	}
	

	return 0;
}
