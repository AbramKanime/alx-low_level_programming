#include "main.h"

/**
 * main - Entry point
 *
 * Description: 'To print the alphabet ten times'
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char alpha;
	int num_count;

	num_count = 0;

	while (num_count < 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		num_count++;
	}
}
