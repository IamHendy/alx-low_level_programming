#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * list_len - finds the number of elements in a linked list
 * @h: pointer to thestart of the  linked list
 *
 * Return: nuber of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	const list_t *tmp;
	unsigned int i;

	tmp = h;
	for (i = 0; tmp; i++)
		tmp = tmp->next;
	return (i);
}
