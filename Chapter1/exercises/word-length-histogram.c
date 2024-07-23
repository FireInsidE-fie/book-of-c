#include <stdio.h>
#include <string.h>

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
	int lengths[MAX_WORDS];
	int state = 0;  // Determines if inside a word or not (see `#define`s)
	int last_c = 0;
	// Operators for the while loops
	int c = 'a';  // Stores a character
	int i = 0;
	int j = 0;

	/* Get the words from the input - TO BE WRITTEN */

	while ((c = getchar()) != EOF)
	{
		// Set state depending on if currently inside a word or not
		if (c == ' ' || c == '\t' || c == '\n')
		{
			state = OUT;
		}
		else
		{
			state = IN;
		}

		last_c = c;

		// Add length to the current index in the lengths array if in a word
		if (state == IN)
		{
			++lengths[i];
		}
		// Go to the next array once the current word is over
		else if (last_c != '\n')
		{
			// code
		}
	}

	/* Placeholder while we wait for word inputting code and direct
		translation to word lengths */
	char words[MAX_WORDS][MAX_LENGTH] = {"TEST1", "TEST2", "TEST3", "TEST4", 
	"TEST5", "TEST6", "TEST7", "TEST8", "TEST9", "TEST10"};

	/* debug - print out the words array */
	printf("== DEBUG - Print words array ==\n");
	i = 0;
	while (i < MAX_WORDS)
	{
		printf("%s\n", words[i]);  // debug
		++i;
	}

	/* Get the length for all the words */

	i = 0;
	while (i < MAX_WORDS)
	{
		j = 0;
		while (words[i][j] != '\0')
		{
			++j;
		}

		lengths[i] = j;
		++i;
	}
	
	/* Print out the histogram - TO BE WRITTEN */

	printf("\n== Begin histogram ==\n");
	i = 0;
	while (i < MAX_WORDS)
	{
		j = 0;
		while (j <= lengths[i])
		{
			putchar('-');
			++j;
		}

		// printf("%d\n", lengths[i]);  // debug
		printf("\n");  // Print a new line after a histogram bar is printed
		++i;
	}

	return 0;
}
