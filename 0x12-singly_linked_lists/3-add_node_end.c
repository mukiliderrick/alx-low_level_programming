#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node_end - add node at the end.
 * @str: string arguments.
 * Return: new node.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last_node;
	list_t *last = *head;

	unsigned int len = 0;

	while(str[len])
	{
		len++;
	}

	last_node = malloc(sizeof(list_t));

	if (last_node == NULL)
		return NULL;

	last_node->str = strdup(str);
	last_node->len = len;
	last_node->next = NULL;

	if(*head == NULL)
	{
		*head = last_node;
		return(last_node);
	}
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
			last->next = last_node;
			(*head)=last_node;
		}
	}
	return (last_node);
}
