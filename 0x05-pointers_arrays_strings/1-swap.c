#include "main.h"

/**
 * swap_int - swaps integers
 * @a: first integer
 * @b: second integer
 * @ stores integer a
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int o;

	o = *a;
	*a = *b;
	*b = o;
}
