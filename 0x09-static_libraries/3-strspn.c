#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: the main string
* @accept: the substring of s
*
* Return: the number of bytes in s consisting of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
			}
		}
		j = 0;
		if (s[i] == ' ')
		{
			break;
		}
	}
	return (count);
}
