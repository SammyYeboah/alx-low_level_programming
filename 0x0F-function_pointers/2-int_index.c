#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: size of the array
 * @cmp: pointer to comparison function
 *
 * Return: index of first element for which cmp does not return 0,
 * or -1 if no element matches or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
