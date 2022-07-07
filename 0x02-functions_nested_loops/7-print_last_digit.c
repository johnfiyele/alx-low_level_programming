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
	x = n % 10;
	_putchar(x + '10');
	return (n);
}