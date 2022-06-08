#include "main.h"

/**
 * print_alphabet - prototype function
 *
 * desc-prints 10 times the alphabet, in lowercase
 *
 * Return: Always void
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
