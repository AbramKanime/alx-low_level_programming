#include <stdio.h>

/**
 * main - Entry point
 *
 * To print the first 50 fibonacci numbers starting with 1 and 2
 *
 * Return: 0 (success)
 */
int main(void)
{
	int count = 3;
	int a = 1, b = 2;
	int next = a + b;

	printf("%d, ", a);
	printf("%d, ", b);

	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%d\n", next);
		} else if (count < 50)
		{
			printf("%d, ", next);
		}
		a = b;
		b = next;
		next = a + b;
		count++;
	}
	return (0);
}
