#include "lists.h"

/**
*delete_nodeint_at_index - deletes node at index
*@head: double pointer to first node
*@index: index of node to delete
*Return: 1 if success || -1 if fail
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *del;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		del = (*head)->next;
		free(*head);
		*head = del;
		return (1);
	}
	temp = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	del = temp->next;
	temp->next = del->next;
	free(del);
	return (1);
}
