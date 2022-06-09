#include "main.h"


/**
 * more numbers - a function that prints 10 times the number, from 0 to 14
 * _putchar only 3 times
 * Return: 0-14 x10 follwed by a new line
 *
 */
void more_numbers(void)
{
	int i, ro;

	for (ro = 0; ro < 10; ro++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i);
		}
		_putchar(ro);
	}
	_putchar('\n');
}
