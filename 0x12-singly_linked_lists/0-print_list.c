#include "lists.h"
#include <stdio.h>

/**
* print_list - prints all the elements of a list_t list
* @h: pointer to the start of the list
*
* Return: number of nodes in the list
*/
size_t print_list(const list_t *h)
{
	unsigned int i;
	const list_t *tmp;

	tmp = h;
	for (i = 0; tmp; i++)
	{
		printf("[%u] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
	}
	return (i);
}/*Author: davidinmichael*/
