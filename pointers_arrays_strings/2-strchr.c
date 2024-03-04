#include "main.h"
#include <stdio.h>
/**
 * _strchr- Write a function that locates a character in a string
 * @s: pointer to the string
 * @c: character to be searched for
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != c)
		if (!*s++)
			return (NULL);
	return (s);
}
