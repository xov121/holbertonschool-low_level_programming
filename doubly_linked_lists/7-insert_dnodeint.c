#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: A double pointer to the head of the doubly linked list.
 * @idx: The index where the new node should be added, starts at 0.
 * @n: The data for the new node.
 *
 * Return: The address of the new node, or NULL if it failed or not
 * possible to add.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int count = 0;

	if (idx == 0)
	return (add_dnodeint(h, n));

	while (temp != NULL && count < idx)
	{
		if (count + 1 == idx)
		{
			new_node = malloc(sizeof(dlistint_t));
			if (new_node == NULL)
			return (NULL);

			new_node->n = n;
			new_node->next = temp->next;
			new_node->prev = temp;
			if (temp->next != NULL)
			temp->next->prev = new_node;
			temp->next = new_node;

			return (new_node);
		}
		temp = temp->next;
		count++;
	}
	if (idx == count)
	return (add_dnodeint_end(h, n));

	return (NULL);
}
