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
	int num0;
	int num1;
	int res;

	if (argc != 3)
	{
		printf("Error\n");
	return (1);
	}
	num0 = atoi(argv[1]);
	num1 = atoi(argv[2]);
	res = num0 * num1;
		printf("%d\n", res);
	return (0);

}
