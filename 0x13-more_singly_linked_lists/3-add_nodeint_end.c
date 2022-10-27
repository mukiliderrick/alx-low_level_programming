#include "lists.h"
/**
 * add_nodeint_end - add node at the end
 * @head: pointer to the node.
 * @n: new node.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new_node;
    listint_t *last = *head;

    new_node = malloc(sizeof(listint_t));

    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
        return (new_node);
    }

    while (last->next)
        last = last->next;
    
    last->next = new_node;

    return (new_node);

}