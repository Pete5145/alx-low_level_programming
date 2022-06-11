#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (0) Success
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (a == 9)
		{
			putchar(a + 48);
		}
		else
		{
			putchar(a + 48);
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
