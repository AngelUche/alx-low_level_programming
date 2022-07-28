#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to the newly created array.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
int a, *s;

if (min > max)
return (NULL);

s = malloc(sizeof(*s) * ((max - min) + 1));

if (s == 0)
return (NULL);
for (a = 0; min <= max; a++, min++)
s[a] = min;
return (s);
}
