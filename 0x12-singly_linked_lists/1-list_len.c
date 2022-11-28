#include "lists.h"

/**
*list_len - counts the elments in a list
*@h: list
*Return: no of elements in linked list
*/
size_t list_len(const list_t *h)
{
	int i;

	i = 0;
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
