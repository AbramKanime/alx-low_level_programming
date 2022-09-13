#include "main.h"

/**
 * print_sign - Prints the sign of a number and the number
 * @n: The number to be checked
 *
 * Return: 1 if greater than 0. 0 if equals 0. -1 if less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
