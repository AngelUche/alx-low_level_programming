#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - print number of element in a list
 * @h: head of the node
 * Return: return number of element in a list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
