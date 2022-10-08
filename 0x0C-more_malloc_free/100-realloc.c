#include "main.h"
#include <stdlib.h>

/**
* _realloc - reallocates a memory block using malloc
* @ptr: pointer to the old memory allocated
* @old_size: the size of the allocated space for ptr
* @new_size: the size of the new memory block
*
* Return: 0 on success
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int a;
	char *new;
	char *old;

	old = ptr;

	if (old_size == new_size)
		return (ptr);
	if (ptr == 0)
	{
		new = malloc(new_size * sizeof(char));
		return (new);
	}
	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (NULL);
	}
	new = malloc(new_size * sizeof(char));
	if (new == 0)
		return (NULL);
	if (new_size < old_size)
	{
		for (a = 0; a < new_size; a++)
			new[a] = old[a];
		return (new);
	}
	free(ptr);
	return (new);
}
