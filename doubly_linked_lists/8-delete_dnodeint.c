#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t
 * linked list.
 * @head: A double pointer to the head of the doubly linked list.
 * @index: The index of the node that should be deleted, starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int count = 0;

	if (temp == NULL)
	return (-1);

	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
		temp->next->prev = NULL;
		free(temp);
		return (1);
	}

	while (temp != NULL && count < index)
	{
		temp = temp->next;
		count++;
	}

	if (temp == NULL)
	return (-1);

	if (temp->next != NULL)
	temp->next->prev = temp->prev;
	if (temp->prev != NULL)
	temp->prev->next = temp->next;

	free(temp);
	return (1);
}
