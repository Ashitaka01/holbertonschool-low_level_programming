#include "main.h"
#include <stddef.h>
/**
 * int_strlen - Write a function that returns the length of a string.
 * Return: lenght
 */
int _strlen(char *s)
{

	size_t length = 0;

	while (*s++)
		length++;

	return (length);

}
