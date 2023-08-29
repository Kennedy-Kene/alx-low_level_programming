#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (!head)
	return (NULL);

	do {
	fast = fast->next;
	if (fast)
	fast = fast->next;

	slow = slow->next;

	if (fast == slow)
	{
	slow = head;
	do {
	slow = slow->next;
	fast = fast->next;
	} while (slow != fast);
	return (fast);
	}
	} while (fast && fast->next && slow);

	return (NULL);
}
