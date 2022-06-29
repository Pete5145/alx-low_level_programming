#include <stdio.h>

/**
 * main - Starting of the program, followedby a new line.
 * @argc: Number of command line arguments passed to the program.
 * @argv: Array of command line arguments.
 *
 * Return: Always (0).
 */
int main(int *argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("s\n", argv[i]);
	}

	return (0);
}
