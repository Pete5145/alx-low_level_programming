#include <stdio.h>
#include <stdlib.h>

/**
 * main - Starting point of the program.
 * @argc: Number of command line arguments passed to the program.
 * @argv: Array of arguments.
 *
 * Return: Always(0).
 */
int main(int argc, char *argv[])
{
	int product, i, num1, num2;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	product = num1 * num2;

	printf("%d\n", product);

	return (0);
}
