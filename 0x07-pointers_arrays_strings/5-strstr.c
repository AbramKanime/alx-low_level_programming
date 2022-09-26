#include "main.h"

/**
* _strstr - locates a substring
* @haystack: the main string
* @needle: the substring
*
* Return: pointer to the beginning of the located substring
* or Null if not found
*/
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[j] && needle[j] != '\0')
		{
			return (&haystack[i]);
		}
	}
	return ('\0');
}
