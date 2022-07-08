#include "main.h"

/**
* print_last_digit -> print the last digits
* @n: the passed args
* Return: the last digit
*/
int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;
	x = n % 0;
	_putchar(x + '0');
	return (x);
}
