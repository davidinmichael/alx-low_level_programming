#include "lists.h"
#include <stdio.h>

/**
* list_len - returns the number of elements in a linked list_t list
* @h: pointer to the start of the list
*
* Return: number of nodes in the list
*/
size_t list_len(const list_t *h)
{
	const list_t *tmp;
	unsigned int i;

	tmp = h;
	for (i = 0; tmp; i++)
	{
		tmp = tmp->next;
	}
	return (i);
}/*Author: davidinmichael*/
