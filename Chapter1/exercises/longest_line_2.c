#include <stdio.h>

/* Exercise page 31 of the book of C
	Print the longest line from all the input
	Technically I just have to add something to another program but I thought
	it would be fun to rewrite the whole thing (I need to lock in) */

void get_line()
{
	int c;  // While loop operator

	c = 0;
	while ((c = getchar()) != '\n')
	{
		printf("%d", c);
	}
	
}

void main()
{
	int current_length, max_length;
	int i, j;  // While operators

}

