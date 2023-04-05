#include "lists.h"
#include <stdio.h>

/**
 * print_listint - main entry point
 * description: function that prints all the elements of a listint_t list
 * @h: this is the pointer to a list
 * Return: number of nodes in the list
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *tp = h;
	unsigned int cntr = 0;

	do {
		printf("%d\n", tp->n);
		cntr++;
		tp = tp->next;
	}
		while (tp != NULL);

	return (cntr);
}
