#include "main.h"
#include <stdio.h>
/**
 * _strlen - Returns the length of a string.
 * @str: string
 *
 * @Return: Length.
 */
int size_t_strlen(const char *str)
{
	int len = 0;

	while (*str++)
	{
		len++;
	}
	return (len);
}
