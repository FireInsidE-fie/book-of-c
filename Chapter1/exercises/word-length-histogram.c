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
	int c = 'a', n_words = 0, state = 0;
	char words[MAX_WORDS][MAX_LENGTH];  // words array

	/* count words */
	while ((c = getchar()) != EOF)
	{
		// putchar(c);  // Debug

		// If blankspace, then out of a word
		if (c == ' ' || c == '\t' || c == '\n')
		{
			state = OUT;
		}
		// If not already in a word, then count a new word
		else if (state != IN)
		{
			state = IN;
			++n_words;
		}
	}

	printf("Number of words: %d\n", n_words);

	/* print histogram */
	printf("Histogram of word length:\n");
	for (int i = 0; i <= MAX_WORDS ; ++i) {
		printf("%s\n", words[i]);
	}

	return 0;
}
