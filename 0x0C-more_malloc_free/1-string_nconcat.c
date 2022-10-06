#include "main.h"
#include <stdlib.h>

/**
* _strlen - calculates the length of string
* @s: the string
*
* Return: the length
*/
int _strlen(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
* string_nconcat - concatenates s2 to s1
* @s1: the 1st string
* @s2: the 2nd string
* @n: number of characters to be appended
*
* Return: pointer to s1 or NULL at failure
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int a, b, c, d;

	a = _strlen(s1);
	b = _strlen(s2);

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	if (n > b)
		n = b;

	p = malloc(sizeof(char) * (a + n) + 1);

	if (p == 0)
		return (NULL);
	for (c = 0, d = 0; c < a + n; c++)
	{
		if (c < a)
			p[c] = s1[c];
		else
		{
			p[c] = s2[d++];
		}
	}
	p[c] = '\0';

	return (p);
}
