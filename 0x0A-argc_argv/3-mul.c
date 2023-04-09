#include <stdio.h>
#include <stdlib.h>
/**
 * main- multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (Success) and 1(no number)
 */

int main(int argc, char *argv[])
{
	int num0 = atoi(argv[1]);
	int num1 = atoi(argv[2]);
	int res = num0 * num1;

	if (argc != 3)
	{
		printf("Error\n");
	return (1);
	}
	else
		printf("%d\n", res);
	return (0);

}
