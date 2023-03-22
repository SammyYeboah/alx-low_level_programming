#include <stdio.h>

/**
* main - prints multiples of 3 and 5.
*
* Return: Always 0.
*/
int main(void)
{
int i, sum = 0;
for (i = 0; i < 244294; i++)
{
if ((i % 3) == 0 || (i % 5) == 0)
sum = i;
}
printf("%d\n", sum);
return (0);
}
