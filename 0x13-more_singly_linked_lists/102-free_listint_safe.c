#include "lists.h"
/**
*_re - realloc memory
*@list: list to append
*@size: size of new list
*@new: new node to add to the list
*Return: pointer to ne list
*/
listint_t **_re(listint_t **list, size_t size, listint_t *new)
{
	listint_t **newl;
	size_t i;

	newl = malloc(size * sizeof(listint_t *));
	if (newl == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		newl[i] = list[i];
	newl[i] = new;
	free(list);
	return (newl);
}
/**
*free_listint_safe - frees a list
*@h: list
*Return: size of list freed
*/
size_t free_listint_safe(listint_t **h)
{
	size_t i, num = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (h == NULL || *h == NULL)
		return (num);
	while (*h != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (*h == list[i])
			{
				*h = NULL;
				free(list);
				return (num);
			}
		}
		num++;
		list = _re(list, num, *h);
		next = (*h)->next;
		free(*h);
		*h = next;
	}
	free(list);
	return (num);
}
