#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data(n).
 * @head: first node in the linked list.
 * Return: pointer to the node we're looking for, or NULL.
*/
int sum_listint(listint_t *head)
{
	if (head == 0)
		return (0);
	else
		return sum_listint(head->next) + head->n;
}
