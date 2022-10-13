#include <stdio.h>
#include <stdlib.h>

/**
* main - function to print its own opcode
* @argc: arguments count
* @argv: arguments vector
*
* Return: 0 (Success)
*/
int main(int argc, char **argv)
{
	int i, j;
	char *s;

	if (argc < 2)
	{
		printf("Error\n");
		exit(1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}
	s = (char *)main;
	for (j = 0; j < i - 1; j++)
		printf("%02hhx ", s[j]);
	printf("%02hhx\n", s[j]);
	return (0);
}
