
#include <stdio.h>
#include "lists.h"

/**
  * print_listint - Prints all elements of a linked list
  * @h: Head of linked list
  *
  * Return: Number of nodes of the linked list
  */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			count++;
		}
	}

	return (count);
}
