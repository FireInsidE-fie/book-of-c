#include <stdio.h>

#define N_CHARACTER 6

/* Exercise 1-14 page 25 of the book of C
	print a histogram of the frequency of different characters in input */
int main(void)
{
	int i;  // While loop operator
	int c;  // Contains a character in while loops
	int frequencies[N_CHARACTER] = {0};  // Frequencies the characters appear
	// Characters to count
	int characters[N_CHARACTER] = {'a', 'e', 'i', 'u', 'o', 'y'};

	while ((c = getchar()) != EOF)
	{
		i = 0;
		while (i < N_CHARACTER - 1)
		{
			if (c == characters[i])
			{
				printf("Detected character %d!\n", characters[i]);  // Debug
				++frequencies[i];
			}
			++i;
		}
	}
	
	i = 0;
	while (i < N_CHARACTER - 1)
	{
		printf("%d", frequencies[i]);
		++i;
	}

	return 0;
}

