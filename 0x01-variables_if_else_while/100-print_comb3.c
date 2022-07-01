
#include <stdio.h>

/**
 * main - Prints the number combination
 *        a comma followed by a space, in ascending order.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			putchar((num1 % 10) + '0');
			putchar((num2 % 10) + '0');
			if (num1 == 7 && num2 == 7)
			continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
