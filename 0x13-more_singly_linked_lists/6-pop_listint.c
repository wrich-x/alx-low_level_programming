#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - function that deletes the head node
 * of a listint_t linked list
 *
 * @head: Head of the linked list
 * Return: if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *start;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	start = *head;
	*head = start->next;
	n = start->n;
	free(start);

	return (n);
}
