#include "main.h"
#include <stdlib.h>

/**
 * *create_array- creates an array of chars,
 * and initializes it with a specific char.
 * @size: number of elements in arra
 * @c: character to initialize all elements
 * Return: NULL if size = 0
 * NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int j;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		array[j] = c;
	return (array);

}
