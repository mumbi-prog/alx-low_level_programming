#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - main entry point
 * description: function that frees a listint_t list
 * @head: the pointer
 * Return: null
 */

void free_listint2(listint_t **head)
{
	if (head == NULL)
	return;

	for (listint_t *mytemporarypointer = *head;
			mytemporarypointer != NULL; mytemporarypointer = *head)
	{
	*head = (*head)->next;
	free(mytemporarypointer);
	}

	*head = NULL;
}
