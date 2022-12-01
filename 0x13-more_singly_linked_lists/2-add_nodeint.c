#include "lists.h"

/**
*add_nodeint - adds new node at beginning of list
*@head: double pointer to first node
*@n: int data to add to list
*Return: addres of new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}
