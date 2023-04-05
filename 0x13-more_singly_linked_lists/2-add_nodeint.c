#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - main entry point
 * description: function that adds a new
 *		node at the beginning of a listint_t list.
 * @head: pointer to the head node of the list.
 * @n: value to add to the new node
 * Return: The address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *mynewnode;

	mynewnode = malloc(sizeof(listint_t));
	if (mynewnode == NULL)
	return (NULL);

	mynewnode->n = n;
	mynewnode->next = *head;
	*head = mynewnode;

	return (mynewnode);
}
