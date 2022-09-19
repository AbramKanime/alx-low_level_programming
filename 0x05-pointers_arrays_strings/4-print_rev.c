#include "main.h"

/**
* print_rev - prints a string in reverse
* followed by a new line
* @s: the string under consideration
*/
void print_rev(char *s)
{
	int i, j, length;

	if (s[0] == '\0')
		_putchar('\0');
	else
	for (i = 0; s[i] != '\0'; i++)
		length = i;

	for (j = length; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
