#include "main.h"

/**
* _strcat - appends src string to dest string
* overwriting the terminating null byte of dest and adds a new null byte
* @dest: pointer to the first string
* @src: pointer to the 2nd string
*
* Return: a pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	char str[100];
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		str[j] = dest[i];
		j++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		str[j] = src[i];
		j++;
	}
	str[j] = '\0';
	dest = str;

	return (dest);
}
