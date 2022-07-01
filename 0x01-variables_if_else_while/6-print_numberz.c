
#include <stdio.h>

/**
 * main - Entry
 *
 * Return: Always 0.
 */
int main(void)
{
	int nom;

	for (nom = 0; nom < 10; nom++)
		putchar((nom % 10) + '0');

	putchar('\n');

	return (0);
}
