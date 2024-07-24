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
	int lengths[MAX_WORDS] = {0};
	int state = 0;  // Determines if inside a word or not (see `#define`s)
	int last_c = 0;  // Contains the last processed character
	// Operators for the while loops
	int c = 'a';  // Stores a character
	int i = 0;
	int j = 0;

	/* Initialize array */

	/* Get the words from the input */

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

		// Add length to the current index in the lengths array if in a word
		if (state == IN)
		{
			++lengths[i];
		}
		// Go the the next index once the current word is over
		else if (last_c != ' ' && last_c != '\t' && last_c != '\n' &&
				state == OUT)
		{
			++i;
		}

		last_c = c;
	}

	// debug - Print out the lengths array
	i = 0;
	while (i <= MAX_WORDS - 1)
	{
		printf("%d ", lengths[i]);
		++i;
	}
	printf("\n");

	/* Print out the histogram */

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
	printf("== End histogram ==");

	return 0;
}
