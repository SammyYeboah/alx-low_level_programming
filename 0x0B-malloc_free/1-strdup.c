#include "main.h"
#include <stdlib.h>

/**
 * *_strdup- returns a pointer to a new string
 * @str: the string
 * Return: NULL if str = NULL and insufficient memory
 *or duplicated string (new string, ing) on success
 */

char *_strdup(char *str)
{
	char *ing;
	size_t ft;

	if (str == NULL)
		return (NULL);
	ft = strlen(str) + 1;
	ing = malloc(ft * sizeof(char));

	if (ing == NULL)
		return (NULL);
	memcpy(ing, str, ft);
	return (ing);
}
