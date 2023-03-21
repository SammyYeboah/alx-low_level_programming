#include <stdio.h>

/**
 * main -  numbers of base 16 in lowercase
 * Return: Always 0
 */

int main(void)
{
	int p;
	char o;

	for (p = 0; p < 9; p++)
		putchar(p + '0');
	for (o = 'a'; o <= 'f'; o++)
		putchar(o);
	putchar('\n');
	return (0);
}
