#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 *
 * @head: Head of the linked list
 * Return: Null
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
