#include "lists.h"

/**
 * free_listint2 - function that free a listint_t in list
 * @hea: pointer to the head.
 */
void free_listint2(listint_t **head)
{
	listint_t *new, *n;
	new = *head;

	while (new)
	{
		n = new->next;
		free(new);
		new = n;
	}
	*head = NULL;
}
