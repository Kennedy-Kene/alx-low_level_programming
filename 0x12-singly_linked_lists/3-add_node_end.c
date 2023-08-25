#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the list_t list
 * @str: string to be added as the content of the new node
 *
 * Return: pointer to the newly created node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	if (str == NULL)
	return (NULL);

	list_t *newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	return (NULL);

	newNode->str = strdup(str);

	if (newNode->str == NULL)
	{
	free(newNode);
	return (NULL);
	}

	newNode->len = strlen(newNode->str);
	newNode->next = NULL;

	if (*head == NULL)
	{
	*head = newNode;
	}
	else
	{
	list_t *current = *head;
	while (current->next != NULL)
	{
	current = current->next;
	}
	current->next = newNode;
	}

	return (newNode);
}

