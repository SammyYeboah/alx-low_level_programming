#include "main.h"
#include <stdlib.h>

/**
 * *str_concat- concatenates two strings.
 * @s1: input string 1
 * @s2: input string 2
 * Return: NULL (Failure and empty string
 * new string on success
 */

char *str_concat(char *s1, char *s2)
{
	char *new_str;
	size_t i, j, len1 = 0, len2 = 0;

	if (s1 != NULL)
		for (len1 = 0; s1[len1]; len1++)
			;
	if (s2 != NULL)
		for (len2 = 0; s2[len2]; len2++)
			;
	new_str = malloc((len1 + len2 + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];
	for (j = 0; j < len2; j++, i++)
		new_str[i] = s2[j];
	new_str[i] = '\0';
	return (new_str);
}
