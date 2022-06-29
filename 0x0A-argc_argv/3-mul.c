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
	int product, i;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < 2; i++)
		{
			product = argv[i] * argv[i + 1];
			printf("%d\n", product);
		}
	}

	return (0);
}
