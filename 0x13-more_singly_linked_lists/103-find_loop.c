#include "lists.h"

/**
*find_listint_loop - finds a loop in a linked list
*@head: pointer to first node of list
*Return: address of node where loop starts
*or null if there's no loop
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *find, *loop;

	find = loop = head;
	while (find && loop && loop->next)
	{
		find = find->next;
		loop = loop->next->next;
		if (find == loop)
		{
			find = head;
			break;
		}
	}
	if (!find || !loop || loop->next)
		return (NULL);
	while (find != loop)
	{
		find = find->next;
		loop = loop->next;
	}
	return (loop);
}
