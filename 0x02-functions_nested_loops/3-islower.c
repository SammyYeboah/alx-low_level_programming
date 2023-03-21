#include "main.h"

/**
 * _islower - prints lower case
 *
 * Return: 1 if it is lower case
 *@c:  parameter to be printed and 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
