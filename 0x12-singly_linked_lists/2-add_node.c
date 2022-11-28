#include "lists.h"

/**
*_length - gets the length of a string
*@s: char
*Return: length
*/
int _length(const char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
*add_node - adds a new node at the beginning
*of list
*@head: pointer to first element
*@str: value
*Return: address of new node or null
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_n;

	new_n = malloc(sizeof(list_t));
	if (new_n == NULL)
		return (NULL);
	new_n->str = strdup(str);
	new_n->len = _length(str);
	new_n->next = *head;
	*head = new_n;
	return (new_n);
}
