#include "main.h"

/**
* print_alphabet -> prints the lowercase alphabets
*/

void print_alphabet_x10(void);
{
	char j;
	char x;

	for (x = 0; x < 10; x++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
