#include "main.h"

/**
* _memset - fills memory with a constant byte
* @s: the pointer to the memory area
* @b: the constant byte to be used
* @n: the number of byte of the memory area pointed by s
*
* Return: a char type
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
