#include "lists.h"
#include <stdio.h>

/*
 * listint_len - main entry point
 * description: function that returns the number of elements
 *		in a linked listint_t list
 * @h: this is pointer to the head of the list
 * Return: number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
		h = h->next;

	return (count);
}
