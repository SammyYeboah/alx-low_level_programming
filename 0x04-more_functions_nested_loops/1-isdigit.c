#include "main.h"

/**
 * _isdigit - function that checks if it's a digit
 *
 * @c: value to be checked
 *
 * Return: 1if it is a digit and 0 if it is not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
