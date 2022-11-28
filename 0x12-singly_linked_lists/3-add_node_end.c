#include "lists.h"

/**
*_len - gets length of a string
*@str: string
*Return: length
*/
unsigned int _len(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
	{
		;
	}
	return (i);
}
/**
*add_node_end - adds a new node at the end of list
*@head: pointer to first element in list
*@str: string to add
*Return: address of new element or null if fail
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tail, *temp;

	if (str == NULL)
		return (NULL);
	tail = malloc(sizeof(list_t));
	if (tail == NULL)
		return (NULL);
	tail->str = strdup(str);
	if (tail->str == NULL)
	{
		free(tail);
		return (NULL);
	}
	tail->len = _len(tail->str);
	tail->next = NULL;
	if (*head == NULL)
	{
		*head = tail;
		return (tail);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = tail;
	return (tail);
}
