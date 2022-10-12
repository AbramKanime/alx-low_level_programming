#include "function_pointers.h"
#include <stdlib.h>

/**
* array_iterator - executes a function given to it as a parameter
* @array: pointer to an array
* @size: size of the array
* @action: pointer to a function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
