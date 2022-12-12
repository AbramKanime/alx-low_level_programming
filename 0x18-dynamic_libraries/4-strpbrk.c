#include "main.h"

/**
* _strpbrk - searches a string for any a set of bytes
* @s: the string to be searched
* @accept: the source string
*
* Return: a pointer to the byte in s or NULL if byte not found
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (0);
}
