#include "main.h"

/**
 * times_table-This function prints 9times table student.
 * Return: Always (0) Success
 */
void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; j++)
	{
		for (j = 0;  j <= 9; i++)
		{
			if (j == 0)
			{
				_putchar(48);
				continue;
			}
			product = i * j;
			_putchar(',');
			_putchar(' ');
			if (product >= 10)
			{
				_putchar(product / 10 + 48);
				_putchar(product % 10 + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(product + 48);
			}
		}
		_putchar('\n');
	}
}
