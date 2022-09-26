#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints sum of two diagonals of a square matrix
* @a: the array
* @size: the size of a
*/
void print_diagsums(int *a, int size)
{
	int i, j, k, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		k = (i * size) + i;
		sum1 += *(a + k);
	}
	for (j = 0; j < size; j++)
	{
		k = (j * size) + (size - 1 - j);
		sum2 += *(a + k);
	}
	printf("%d, %d\n", sum1, sum2);
}
