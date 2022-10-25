#include "lists.h"

/**
* print_listint_safe - Prints a linked list
* @head: Pointer to a linked list
*
* Return: The number of nodes or exit at failure
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *new, *comp;
	size_t count_new = 0, count_comp = 0;

	new = head;
	comp = head;
	while (new != NULL)
	{
		while (count_new > count_comp)
		{
			if (new == comp)
			{
				printf("-> [%p] %d\n", (void *)new, new->n);
				return (count_new);
			}
			count_comp++;
			comp = comp->next;
		}
		comp = head;
		count_comp = 0;
		printf("[%p] %d\n", (void *)new, new->n);
		count_new++;
		new = new->next;
	}
	return (count_new);
}
