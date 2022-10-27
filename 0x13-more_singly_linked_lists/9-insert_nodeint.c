#include "lists.h"
/**
 * 
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new;
    listint_t *tmp = *head;

    new = malloc(sizeof(listint_t));

    new->n = n;
    new->next = NULL;

    if (idx == 0)
    {
        new->next = *head;
        *head = new;
        return (new);
    }
    unsigned int i;

    for (i = 0; i < idx; i++)
    {
        if (i == idx-1)
        {
            new->next = tmp->next;
            tmp->next = new;
            return (new);
        }
        else
        {
            tmp = tmp->next;
        }
    }
    return (NULL);

}