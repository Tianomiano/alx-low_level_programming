#include "lists.h"

/**
*listint_len - finds length of a list
*@h: head of linked list
*Return: node count
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
