#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	if (*head == NULL)
	return (NULL);

	do {
	next = (*head)->next;
	(*head)->next = prev;
	prev = *head;
	*head = next;
	} while (*head != NULL);

	*head = prev;

	return (*head);
}

