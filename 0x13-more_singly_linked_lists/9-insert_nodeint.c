#include "lists.h"
/**
 * insert_nodeint_at_index - Insert a new node to a listint_t list.
 * @head: A pointer to the address of the head of the listint_t list.
 * @idx: The index of the listint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: if the function fails.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *copy = *head;
	unsigned int i;

	new = malloc(sizeof(listint_t));

	new->n = n;
	new->next = NULL;
	if (new == 0)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new->next = copy;
		*head = new;
		return (new);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);
		copy = copy->next;
	}
	new->next = copy->next;
	copy->next = new;

	return (new);
}
