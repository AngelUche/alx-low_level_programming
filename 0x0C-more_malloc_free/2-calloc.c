#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array.
 * @nmemb: number of elements.
 * @size: size of bytes.
 *
 * Return: pointer to the allocated memory.
 * if nmemb or size is 0, returns NULL.
 * if malloc fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int a;

	if (nmeb == 0 || size == 0)
		return (NULL);
	s = malloc(nmeb * size);
	if (s == NULL)
		return (NULL);
	for (a = 0; b < (nmeb * size)
			s(a) = 0;
			return (s);
}
