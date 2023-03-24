#include "main.h"

/**
 * print_most_numbers - prints 0 to 9 without 2 and 4
 *
 * Return: numbers
 */

void print_most_numbers(void)
{
	int r;

	for (r = 0; r <= 9; r++)
	{
		if (r == 2 || r == 4)
		{
		continue;
		}
	_putchar(r + '0');
	}
	_putchar('\n');
}
