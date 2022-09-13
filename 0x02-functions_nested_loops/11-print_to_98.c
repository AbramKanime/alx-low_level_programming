#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers to 98
 *
 * @n: The integer to be passed to the function
 */
void print_to_98(int n)
{
	n = 0;
	while (n < 99)
	{
		printf("%d, ", n);
		n++;
	}
}
