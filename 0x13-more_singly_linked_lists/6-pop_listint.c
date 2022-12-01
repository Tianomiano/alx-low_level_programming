#include "lists.h"

/**
*pop_listint - deletes head node of linked list
*@head: double pointer to first node
*Return: ni or empty
*/
int pop_listint(listint_t **head)
{
	listint_t *del;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	del = *head;
	*head = del->next;
	n = del->n;
	free(del);
	return (n);
}
