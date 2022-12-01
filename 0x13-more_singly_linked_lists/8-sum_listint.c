#include "lists.h"

/**
*sum_listint - sum of elements in ll
*@head: pointer to first node
*Return: sum
*/
int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
