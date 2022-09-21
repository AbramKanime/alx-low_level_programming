#include "main.h"
#include <string.h>

/**
* _strncat - concatenates two strings while allocating memory
* @dest: the first string
* @src: the secod string
* @n: the memory size
*
* Return: pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_len = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
