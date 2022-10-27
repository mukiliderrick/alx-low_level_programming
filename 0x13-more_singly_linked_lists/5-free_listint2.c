#include "lists.h"
/**
 * 
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