#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node at a certain index
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *curr;
    listint_t *temp;

    temp = *head;
    curr = *head;
    unsigned int i;

    if (*head == NULL)
        return (-1);
    
    if (index == 0)
    {
        *head = (*head)->next;
        free(temp);
        return (1);
    }
    while (i < index - 1)
    {
        if (!temp || !(temp->next))
            return (-1);
        temp = temp->next;
        i++;
    }
    curr = temp->next;
    temp->next = curr->next;
    free(curr);
    return (1);

    
}