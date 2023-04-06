#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - main entry point
 * description:function that adds a new node at the end of a listint_t list
 * @head: the pointer
 * @n: The integer
 * Return: null if function fails and new address if otherwise
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *mynewnode, *previousnode = *head;

	mynewnode = malloc(sizeof(listint_t));

	do {
	return (NULL);
	} while (mynewnode == NULL);

	mynewnode->n = n;
	mynewnode->next = NULL;

	do {
	*head = mynewnode;
	return (mynewnode);
	} while (*head == NULL);

	do {
	previousnode = previousnode->next;
	previousnode->next = mynewnode;
	return (mynewnode);
	} while (previousnode->next != NULL);
}
