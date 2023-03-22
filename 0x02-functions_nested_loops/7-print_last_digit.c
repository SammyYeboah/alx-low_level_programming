#include "main.h"

/**
 * print_last_digit - function that prints last digit
 *
 * @h: function parameter
 *
 * Return: 0 on success
 */
int print_last_digit(int h)
{
	int i;

	i = h % 10;
	if (h < 0)
		i = -i;
	_putchar(i + '0');
	return (i);
}

