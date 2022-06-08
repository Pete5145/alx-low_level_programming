#include "main.h"

/**
 * _islower - Entry point
 * Description: checks if a character is lowercase
 * @c: the integer value it receives
 * Return: 1 if true. 0 if false.
 */
int _islower(int c)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);

		if (c >= 'a' && c <= 'z')
		{
			return (1);
		}
		else
		{
			return(0);
		}
	}
	return (0);
}
