#include <stdio.h>

/**
 * main - Entry point
 *
 * To print the first 98 fibonacci numbers starting with 1 and 2
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 3;
	long int a = 1, b = 2, next;

	next = a + b;

	printf("%lu, ", a);
	printf("%lu, ", b);

	while (i <= 98)
	{
		if (i == 98)
		{
			printf("%lu\n", next);
		} else if (i < 98)
		{
			printf("%lu, ", next);
		}
		a = b;
		b = next;
		next = a + b;
		i++;
	}
	return (0);
}
