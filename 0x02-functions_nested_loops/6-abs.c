#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @k: parameter
 * Return: always a (on success)
 */
int _abs(int k)
{
	if (k < 0)
		k = -(k);
	else if (k >= 0)
		k = (k);
	return (k);
}
