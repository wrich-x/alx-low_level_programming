#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the
 * nth node of a listint_t linked list
 *
 * @head: Head of the linked list
 * @index: Index of the linked list
 * Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		head = head->next;

		if (head == NULL)
			return (NULL);
	}
	return (head);
}

