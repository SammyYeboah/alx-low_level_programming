#include <stdio.h>

/**
 * main- function that  prints all arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int c;

	for (c = 0, c < argc, c++)
		printf("%s\n", argv[c]);
	return (0);
}
