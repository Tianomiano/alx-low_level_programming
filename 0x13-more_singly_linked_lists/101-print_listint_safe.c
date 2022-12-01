#include "lists.h"

/**
*_r - realloc memory for array of pointers to nodes in ll
*@list: list to append
*@size: size of list
*@new: new node
*Return: pointer to new list
*/
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newl;
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
*print_listint_safe - prints a linked list
*@head: pointer to first node
*Return: number of nodes
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t i, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (head == list[i])
			{
				printf("->[%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
		}
		num++;
		list = _r(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num);
}
