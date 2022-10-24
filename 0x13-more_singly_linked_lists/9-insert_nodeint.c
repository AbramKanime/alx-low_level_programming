#include "lists.h"

/**
* insert_nodeint_at_index - Inserts node at a given position
* @head: Pointer to a pointer to a linked list
* @idx: Where the node should be inserted
* @n: The data to be inserted
*
* Return: Address of the new node or NULL at failure
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *newnode;
	unsigned int count = 1;

	if (head == 0)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (newnode == 0)
		return (NULL);
	newnode->n = n;
	newnode->next = 0;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	free(newnode);
	temp = *head;
	while (temp->next != 0)
	{
		count++;
		temp = temp->next;
	}
	if (idx > count)
		return (NULL);
	temp = *head;
	count = 1;
	while (count < idx)
	{
		temp = temp->next;
		count++;
	}
	newnode = malloc(sizeof(listint_t));
	if (newnode == 0)
		return (NULL);
	newnode->n = n;
	newnode->next = temp->next;
	temp->next = newnode;

	return (newnode);
}
