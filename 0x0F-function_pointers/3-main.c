#include <stdio.h>
#include "3-calc.h"
#include <string.h>
#include <stdlib.h>

/**
* main - Main funcion
* @argc: argument count
* @argv: argument vector
*
* Return: Always 0 (Success)
*/
int main(int argc, char **argv)
{
	if (argc == 4)
	{
		printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
		return (0);
	}
	printf("Error\n");
	exit(98);
}
