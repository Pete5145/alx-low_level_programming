#include "main.h"

/**
 * print_alphabet_x10- prototype function
 *
 * desc-prints 10 times the alphabet, in lowercase
 *
 * Return void
 */
void print_alphabet_x10()
{
	char i;
	int times = 1;

	while (times <= 10)
	{
		i = 'a';

		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		times++;
	}
}
