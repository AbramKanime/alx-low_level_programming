#include <stdio.h>
#include <stdlib.h>

/**
* main - entry point
* @argc: the argument count
* @argv: the argument vector
*
* Return: 0 (successful). Otherwise 1
*/
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
