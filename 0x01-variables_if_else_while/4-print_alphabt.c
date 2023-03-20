#include <stdio.h>

/**
 * main - prints alphabets in lower case
 * except q and e
 * Return: Always 0
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		if (a != 'q' && a != 'q')
			putchar(a);
	return (0);
}
