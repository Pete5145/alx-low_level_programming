#include <stdio.h>

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

	if (argc == 1)
		printf("0\n");
	for (i = 0; i < argc; i++)
	{
		if (!(argv[i] >= '0') && !(argv[i] <= '9'))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += argv[i];
		}
	}
	return (sum);
}
