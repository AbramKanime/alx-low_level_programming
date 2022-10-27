#include "main.h"

/**
* binary_to_uint - Converts binary to unsigned int
* @b: Pointer to binary
*
* Return: The converted number
*/
unsigned int binary_to_uint(const char *b)
{
	int len = 0, base = 1;
	unsigned int res = 0;

	while (b[len] != '\0')
	{
		if ((b[len] != '0' && b[len] != '1') || b == NULL)
			return (0);
		len++;
	}
	len--;
	while (len >= 0)
	{
		res = res + (b[len] - '0') * base;
		base *= 2;
		len--;
	}
	return (res);
}
