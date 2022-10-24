#include "lists.h"

/**
* delete_nodeint_at_index - Deletes node at index of a linked list
* @head: Pointer to a pointer to a linked list
* @index: The index of the node to be deleted
*
* Return: 1 at success or -1 at failure
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *next_link;
	unsigned int i = 1;

	if (*head == 0)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*(head))->next;
		free(temp);
		return (1);
	}
	next_link = *head;
	temp = (*(head))->next;
	while (temp != 0)
	{
		if (i == index)
		{
			next_link->next = temp->next;
			free(temp);
			return (1);
		}
		next_link = temp;
		temp = temp->next;
		i++;
	}
	return (-1);
}
