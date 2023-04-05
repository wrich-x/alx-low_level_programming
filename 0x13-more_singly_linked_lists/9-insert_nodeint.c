#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node at a given position.
 *
 * @head: head of the linked list
 * @idx: insext of the linkeed list
 * @n: new value in the linked list
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp, *new;

	if (head == NULL)
		return (NULL);

	if (idx != 0)
	{
		temp = *head;

		for (i = 0; i < idx - 1 && temp != NULL; i++)
		{
			temp = temp->next;
		}

		if (temp == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
