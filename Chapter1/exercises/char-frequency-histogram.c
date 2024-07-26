#include <stdio.h>

#define N_CHARACTER 6

/* Exercise 1-14 page 25 of the book of C
	print a histogram of the frequency of different characters in input */
int main(void)
{
	int i;  // While loop operator
	int j;  // While loop operator
	int c;  // Contains a character in while loops
	int frequencies[N_CHARACTER] = {0};  // Frequencies the characters appear
	// Characters to count
	int characters[N_CHARACTER] = {'a', 'e', 'i', 'u', 'o', 'y'};

	// Reads the input and counts the specified characters if present
	while ((c = getchar()) != EOF)
	{
		i = 0;
		while (i <= N_CHARACTER - 1)
		{
			if (c == characters[i])
			{
				++frequencies[i];
			}
			++i;
		}
	}

	// Print histogram
	printf("\n== BEGIN HISTOGRAM ==\n");
	
	i = 0;
	while (i <= N_CHARACTER - 1)
	{
		j = 0;
		while (j < frequencies[i])
		{
			printf("-");
			++j;
		}
		
		printf("\n");
		++i;
	}

	printf("== END HISTOGRAM ==\n");
	
	return 0;
}

/* POTENTIAL IMPROVEMENTS (once it works)
	Optimize the character detection so that if the current one is counted
	it just skips the rest of the characters and goes to the next one in input
*/
