#include <stdio.h>

/**
 * main - entry
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 9)
			putchar(i + 0);
		else
		{	putchar(i);
			putchar(',');
			putchar (' ');
		}
	}
	putchar('\n');
	return (0);
}
