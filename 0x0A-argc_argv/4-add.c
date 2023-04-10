#include <stdlib.h>
#include <stdio.h>

/**
 * main- prints addition of positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0(no number) and 1(error)
 */

int main(int argc, char *argv[])
{
	int sum = 0, num;

	for (num = 1; num < argc; num++)
	{
		char *ptr;
		int i = strtol(argv[num], &ptr, 10);

		if (*ptr != '\0')
		{
			printf("Error\n");
			return (1);
		}
		sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
