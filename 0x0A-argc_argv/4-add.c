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
	int i, digit, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (digit = 0; argv[i][digit]; digit++)
		{
			if (argv[i][digit] < '0' || argv[i][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
			sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
