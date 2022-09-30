#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* @argc: the arg count
* @argv: the arg vector
*
* Return: 0 (successful). Otherwise 1
*/
int main(__attribute__((unused)) int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
