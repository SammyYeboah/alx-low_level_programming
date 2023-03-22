#include "main.h"

/**
* print_times_table - prints times table, starting with 0
* @n: param.
*/
void print_times_table(int n)
{
int b, j, a;
if (n >= 0 && n <= 15)
{
for (b = 0; b <= n; b++)
{
for (j = 0; j <= n; j++)
{
a = j * b;
if (j == 0)
{
_putchar(a + '0');
}
else if (a < 10 && j != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(a + '0');
}
else if (a >= 10 && a < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((a / 10) + '0');
_putchar((a % 10) + '0');
}
else if (a >= 100)
{
_putchar(',');
_putchar(' ');
_putchar((a / 100) + '0');
_putchar(((a / 10) % 10) + '0');
_putchar((a % 10) + '0');
}
}
_putchar('\n');
}
}
}
