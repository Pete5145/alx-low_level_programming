#include <stdio.h>

/**
 * main - Starting point of the program.
 * @argc: Number of command line arguments passed to the program.
 * @argv: Array of arguments.
 *
 * Return: Always(0).
 */
int main(int argc, char *argv[])
{
	int product;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		product = argv[1] * argv[2];
		printf("%d\n", product);
	}

	return (0);
}
