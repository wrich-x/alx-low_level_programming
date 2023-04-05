#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - function that frees a listint_t list.
 *
 * @head: Head of the linked list
 * Return: NULL
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
