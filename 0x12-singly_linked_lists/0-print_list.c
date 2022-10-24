#include "lists.h"

/**
 * print_list - prints the number of nodes.
 * @h: The list_t list.
 * 
 * Return: returns the number of nodes in h.
*/

size_t print_list(const list_t *h)
{
    size_t nodes = 0;
    while (h)
    {
        if (h->str == NULL)
        {
            printf("[0], (null)\n ");
        }
        else
        {
            printf("[%d] %s \n ", h->len, h->str);
        }
        nodes++;
        h = h->next;

    }


    return(nodes);
}