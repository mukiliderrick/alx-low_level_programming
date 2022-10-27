#include "lists.h"
#include <stdlib.h>

/**
 * 
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new_node;

    new_node = malloc(sizeof(listint_t));
    
    if(head == NULL)
    
     return (NULL);   
    
    new_node->n = n;
    new_node->next = *head;
    *head = new_node;

    return (new_node);


}