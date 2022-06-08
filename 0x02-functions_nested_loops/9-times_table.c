#include "main.h"

/*
 * times_table - This function prints the 9 times table
 *
 * Description: This program prints the 9 times table
 *
 * Return: Always (0) Success
 */
void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0;  j <= 9; i++)
		{
			product = i * j;
			_putchar(product );
		}
		_putchar('\n');
	}
	return (0);
}
