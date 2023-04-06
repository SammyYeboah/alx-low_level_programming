#include "main.h"

/**
 * _sqrt_recursion- function that prints square root
 * @n: number
 * Return: for less than 0, -1
 * and if not the square root of the number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt_recursion(n, 0));
}
