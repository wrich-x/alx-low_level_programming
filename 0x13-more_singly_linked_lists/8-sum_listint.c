#include "lists.h"
/**
 * sum_listint - function that returns the sum of
 * all the data (n) of a listint_t linked list.
 *
 * @head: Head of the linked list
 * Return: sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
