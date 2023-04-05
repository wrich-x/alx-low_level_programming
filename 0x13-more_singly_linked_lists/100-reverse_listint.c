#include <stdlib.h>
#include "lists.h"
/**
 * reverse_listint - function that reverses a
 * listint_t linked list.
 *
 * @head: head of the linked list
 * Return: a pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *next;

	if (head == NULL || *head == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);

	previous = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	*head = previous;

	return (*head);
}
