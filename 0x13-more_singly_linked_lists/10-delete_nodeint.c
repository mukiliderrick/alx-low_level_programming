#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node at a certain index
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *prev;
    listint_t *temp;

    temp = *head;
    prev = *head;
    unsigned int i = 0;

    for (i = 0; i < index; i++)
    {
        if (i == 0 && index == 1)
        {
            *head = (*head)->next;
            free(temp);
        }
        else
        {
            if ( i == index - 1 && temp)
            {
                prev->next = temp->next;
                free(temp);
            }
            else
            {
                prev = temp;
                if (prev == NULL)
                    break;
                temp = temp->next;
            }
        }
    }
}