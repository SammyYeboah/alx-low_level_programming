#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints natural numbers
 *
 * @n: parameter
 *
 * Return: always 0
 */
void print_to_98(int n)
{
	int u;

	if (n >= 0 && n <= 98)
	{
		for (u = n; u <= 98; u++)
		{
			printf("%d,", u);
		}
	}
	else if (n < 0)
	{
		for (u = n; u <= 98; u++)
		{
			printf("%d,", u);
		}
	}
	else if (n > 98)
	{
		for (u = n; u >= 98; u--)
		{
			printf("%d,", u);
		}
	}
	else if (n == 98)
		printf("%d,", n);
}
