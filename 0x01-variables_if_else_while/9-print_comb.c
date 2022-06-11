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
			putchar("%d", a);
			putchar("%c", '$');
		}
		else
		{
			putchar("%d", a);
			putchar("%c ", a);
		}
		return (0);
	}
}
