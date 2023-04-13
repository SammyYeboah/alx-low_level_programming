#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc- allocates memory for an array
 * @nmemb:number of elements
 * @size: size of element
 * Return: NULL if size is 0 and or malloc failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem2;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem2 = malloc(nmemb * size);
	if (mem2 == NULL)
		return (NULL);
	memset(mem2, 0, nmemb * size);
	return (mem2);
}
