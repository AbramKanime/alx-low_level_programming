#include "main.h"

/**
* print_number - that prints an integer
* @n: the number to print
*/
void print_number(int n)
{
	unsigned int j;

	if (n < 0)
	{
		j = -n;
		_putchar('-');
	}
	else
	{
		j = n;
	}

	if (j / 10)
	{
		print_number(n / 10);
	}
	{
		_putchar((n % 10) + '0');
	}
}
