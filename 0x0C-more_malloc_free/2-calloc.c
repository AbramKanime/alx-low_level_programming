#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocates memory for an array
* @nmemb: the number of blocks
* @size: the byte size of each block
*
* Return: NULL if nmemb/size 0 or malloc fails
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, j;

	j = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(j);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		ptr[i] = 0;

	return (ptr);
}
