
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Entry point
*Return: Always 0 (Success)
*/

int main(void)

{
int n;

printf("Enter a number: ")

scanf("%d", &n);
if (n > 0)

{
printf("is positive\n", n);
}

else if (n < 0)

{
printf("is negative\n", n);
}

else if (n == 0)

{
printf(" is zero", n);
}

return (0);
}
