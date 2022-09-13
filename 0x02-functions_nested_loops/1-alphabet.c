#include "main.h"

/**
 * main - Entry point
 *
 * Description: 'To print the alphabets in lowercase'
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}

	_putchar('\n');
	return;
}
