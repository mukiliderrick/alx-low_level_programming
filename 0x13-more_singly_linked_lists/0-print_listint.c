#include "lists.h"
#include <stdio.h>
/**
 * print_listint - print all the elements of a list.
 * @listint_t: list parameter.
*/
size_t print_listint(const listint_t *h)
{
    size_t nodes = 0;
    while (h!= NULL)
    {
        printf("%d\n",h->n);
        nodes++;
        h = h->next;
    }
    return (nodes);
}