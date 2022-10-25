#include "lists.h"

/**
* reverse_listint - Reverses a linked list
* @head: Pointer to a linked list
*
* Return: Pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current_node, *next_node;

	current_node = next_node = *head;
	*head = 0;
	while (next_node != 0)
	{
		next_node = next_node->next;
		current_node->next = *head;
		*head = current_node;
		current_node = next_node;
	}
	return (*head);
}
