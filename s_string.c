#include "holberton.h"

/**
 * string_to_string - gets arguments string copies it and return a string
 *
 * @arg: variable list of arguments
 *
 * Return: the copied string
 */
char *string_to_string(va_list arg)
{
	char *s, *c_s, *n;

	s = va_arg(arg, char *);
	if (s == NULL)
	{
		n = malloc(sizeof(char) * 7);
		if (n == NULL)
			return (NULL);
		n = strcpy(n, "(null)");
		return (n);
	}
	c_s = malloc(sizeof(char) * (_strlen(s) + 1));
	if (c_s == NULL)
		return (NULL);
	c_s = strcpy(c_s, s);
	return (c_s);
}
