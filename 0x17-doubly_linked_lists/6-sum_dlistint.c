#include "lists.h"


/**
 * sum_dlistint - sums all the element together @head: pointer head Return:
 * @head: head of a pointer
 * Return: the sum of all element
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr, *temp;
	int sum = 0;

	temp = head;
	while (temp != NULL)
	{
		ptr = temp->next;
		sum += temp->n;
		temp = ptr;
	}
	return (sum);
}
