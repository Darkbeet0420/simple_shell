#include "main.h"

/**
 * _strsep - extract token from a string
 * @str: a pointer to string
 * @delim: delimiters
 * Return: a pointer to token
 */

char *_strsep(char **str, char *delim)
{
	char *start, *end;

	start = *str;
	if (start == NULL)
		return (NULL);
	end = start + _strcspn(start, delim);
	if (*end)
	{
		*end++ = '\0';
		*str = end;
	}
	else
		*str = NULL;
	return (start);
}
