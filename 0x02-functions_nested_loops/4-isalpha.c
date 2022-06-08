#include "main.h"

/**
 * isalpha - Entry point
 * Description: checks if a character is a letter, lowercase or uppercase
 * @c the integer value it receives
 * Return: 1 if true. 0 if false
 */
int _isalpha(int c)
{
	return (c <= 'a' && c >= 'z' || c <= 'A' && c >= 'Z');
}
