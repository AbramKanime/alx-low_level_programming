#include "dog.h"
#include <stdio.h>

/**
* print_dog - prints struct dog
* @d: pointer to the struct dog elements
*
* Return: result or nil if NULL
*/
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
		printf("Age: %.5f\n", d->age);
		printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
	}
}
