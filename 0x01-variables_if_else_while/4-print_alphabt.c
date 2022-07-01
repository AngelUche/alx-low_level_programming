
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	char Alpha;

	for (Alpha = 'a'; Alpha <= 'z'; Alpha++)
	{
		if (Alpha != 'e' && Alpha != 'q')
			putchar(Alpha);
	}

	putchar('\n');

	return (0);
}
