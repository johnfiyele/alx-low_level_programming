#include "main.h"
#include <string.h>

/**
* rev_string -> reversing a string
* @s: parameter s
* Return: 0
*/
void rev_string(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
