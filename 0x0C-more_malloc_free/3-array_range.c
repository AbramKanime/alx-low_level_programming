#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers
* @min: values from min
* @max: values from max
*
* Return: pointer to the array. NULL at failure
*/
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (max - min) + 4);
	if (p == 0)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}
