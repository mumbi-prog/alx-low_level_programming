#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - main entry point
 * description: function that frees a listint_t list.
 * @head: the pointer
 *
 * Return: Null
 */

void free_listint(listint_t *head)
{
	listint_t *previousnode;

	do {
	previousnode = head;
	head = head->next;
	free(previousnode);
	} while (head != NULL);
}
