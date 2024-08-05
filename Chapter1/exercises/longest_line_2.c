#include <stdio.h>

#define MAX_LENGTH 1000  // Max line length that the program will process

/* Exercise page 31 of the book of C
	Print the longest line from all the input
	Technically I just have to add something to another program but I thought
	it would be fun to rewrite the whole thing (I need to lock in) */

// Return the length of the current line of input
int get_line()
{
	int c;  // While loop operator
	int length;  // The length of the current line that will be returned

	c = 0;
	length = 0;
	while ((c = getchar()) != '\n')
	{
		++length;
	}
	return length;
}

void main()
{
	int current_length, max_length;
	int i, j;  // While operators

	current_length = get_line();
	printf("The line was %d characters long.\n", current_length);
}

