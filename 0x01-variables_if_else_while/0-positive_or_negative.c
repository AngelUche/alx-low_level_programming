
#include <stdlib.h>

#include <time.h>
int main(void)

/**
 * main - Entry point
 *Return: Always 1 (Success)
 */

{
int n;
printf("Enter a number: ");
scanf("%d", &n);
if (n > 0)
{
printf("is positive\n");
}

else if (n < 0)
{
printf("is negative\n");
}
else if (n == 0)

{
printf(" is zero");
}

return (0);

}
