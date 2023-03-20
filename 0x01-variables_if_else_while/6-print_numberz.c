#include <stdio.h>

/**
 * main - prints all single digits
 * using putchar
 * Return: always 0
 */

int main(void)
{
	int f;

	for (f = '0'; f < '10'; f++)
		putchar(f);
	return (0);
}
