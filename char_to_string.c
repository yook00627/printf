#include "holberton.h"

/**
 * s_char - gets arguments character and converts it to string
 *
 * @arg: variable list of arguments
 *
 * Return: the string contianing the character
 */
char *s_char(va_list arg)
{
	char *s;

	s = malloc(sizeof(char) * 2);
	s[0] = va_arg(arg, int);
	s[1] = '\0';
	return (s);
}