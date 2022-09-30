#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - adds positive numbers
* @argc: arg count
* @argv: arg vector
*
* Return: Result. Or Error if not digit
*/
int main(int argc, char **argv)
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0' ; j++)
		{
			if (argv[i][j] < 47 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
