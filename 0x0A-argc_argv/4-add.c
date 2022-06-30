#include <stdio.h>
#include <stdlib.h>

/**
 * main - Starting of the program.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of arguments.
 *
 * Return: Always (0);
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 0; i < argc; i++)
	{
		if (!(argv[i] >= '0') || !(argv[i] <= '9'))
		{
			printf("Error\n");
			return (1);
		}
		if (argv[i] > 0)
		{
			sum += atoi(argv[i]);
		}
	}
	return (sum);
}
