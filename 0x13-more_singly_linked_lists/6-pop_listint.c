#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - function that deletes the head node of a list.
 * @head: pointer to the head.
*/
int pop_listint(listint_t **head)
{
    listint_t *tmp;
    int key;
    if (head == NULL)
        return (0);

    key = (*head)->n;
    tmp = (*head)->next;
    free(*head);
    *head = tmp;

    return (key);
}