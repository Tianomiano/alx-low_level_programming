#include "lists.h"

/**
*insert_nodeint_at_index - inserts new node at given position
*@head: pointer to first node
*@idx: index wher new node is added
*@n: value of new node
*Return: address of new node or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp, *newn;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		temp = *head;
		for (i = 0; i < idx - 1 && temp != NULL; i++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
			return (NULL);
	}
	newn = malloc(sizeof(listint_t));
	if (newn == NULL)
		return (NULL);
	newn->n = n;
	if (idx == 0)
	{
		newn->next = *head;
		*head = newn;
		return (newn);
	}
	newn->next = temp->next;
	temp->next = newn;
	return (newn);
}
