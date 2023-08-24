#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the list_t list
 * @str: string to be added as the content of the new node
 *
 * Return: pointer to the newly created node
 */
list_t *add_node(list_t **head, const char *str)
{
	if (str == NULL)
	return (NULL);

	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
	return (NULL);

	new->str = strdup(str);

	if (new->str == NULL)
	{
	free(new);
	return (NULL);
	}

	new->len = strlen(new->str);
	new->next = *head;

	*head = new;

	return (new);
}

