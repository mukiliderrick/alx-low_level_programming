#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all the elements of a list.
 * @h: A pomter to the head of the list_t list
 *
 * Return: the number of nodes in the list_t list.
*/
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n" , h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
