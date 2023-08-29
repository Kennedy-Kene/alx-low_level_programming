#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
	printf("Node %lu: Value = %d\n", num + 1, h->n);
	num++;
	h = h->next;
	}

	return (num);
}
