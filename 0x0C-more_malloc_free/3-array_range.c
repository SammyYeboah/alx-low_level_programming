#include "main.h"
#include <stdlib.h>


/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: new  array
 */

int *array_range(int min, int max)
{
	int arr2;
	int i;

	if (min > max)
		return (NULL);
	arr2 = malloc(sizeof(int) * (max - min + 1));
	if (arr2 == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		arr2[i] = min;
	return (arr2);
}
