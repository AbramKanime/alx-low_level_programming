#include "variadic_functions.h"
#include <stdio.h>

/**
* print_all - prints anything
* @format: list of types of arguments passed
*/
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0, orders;
	char *str;

	while (format && format[i])
	{
		va_start(list, format);
		while (format[i])
		{
			orders = 1;
			switch (format[i++])
			{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				str = va_arg(list, char *);
				if (str)
				{
					printf("%s", str);
					break;
				}
				else
				{
					printf("(nil)");
					break;
				}
			default:
				orders = 0;
				break;
			}
			if (format[i] && orders)
				printf(", ");
		}
		va_end(list);
	}
	printf("\n");
}
