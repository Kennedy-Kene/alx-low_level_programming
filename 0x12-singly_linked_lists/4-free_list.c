#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *nextNode;

	while (current != NULL)
	{
	nextNode = current->next;
	free(current->str);
	free(current);
	current = nextNode;
	}
}

