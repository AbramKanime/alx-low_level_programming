#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers
* @argc: arg count
* @argv: arg vector
*
* Return: 0 (success). Otherwise 1, Error.
*/
int main(int argc, char **argv)
{
	int i = 1, mul;

	if (argc == 3)
	{
		mul = atoi(argv[i]) * atoi(argv[i + 1]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
