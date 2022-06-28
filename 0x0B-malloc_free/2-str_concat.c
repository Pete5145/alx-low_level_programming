#include "main.h"
#include <stdlib.h>

/**
 * str_concat - This function concatenates two strings
 * @s1: This is the first string.
 * @s2: This is the second string.
 *
 * Return: returns a pointer that points to a newly allocated
 * space in memory which contains ths contents of s1,
 * followed bu the contents of s2, and null terminated.
 */
char *str_concat(char *s1, char *s2)
{
	char *pStr;
	int i, j, s1len = 0, s2len = 0;

	if (s1 == NULL || s2 == NULL)
		return ("");

	for (i = 0; s1[i] != '\0'; i++)
		s1len++;

	for (i = 0; s2[i] != '\0'; i++)
		s2len++;

	pStr = malloc(sizeof(char) + (s1len + s2len));

	if (pStr == NULL)
		return (NULL);

	i = 0;
	j = 0;

	while (s1[i] != '\0')
	{
		pStr[j] = s1[i];
		i++;
		j++;
	}

	while (s2[i] != '\0')
	{
		pStr[j] = s2[i];
		i++;
		j++;
	}

	pStr[j] = '\0';

	free(pStr);
	return (pStr);
}
