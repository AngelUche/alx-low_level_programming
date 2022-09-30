#include <stdio.h>
#include "lists.h"

/*
 * print_dlistint - prints element in a list
 * @h: head of the node
 * Return: return number of element in a list
 */

size_t print_dlistint(const dlistint_t *h)

{
	size_t count = 0;

	while (h != NULL)
	{
		printf(" %d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
