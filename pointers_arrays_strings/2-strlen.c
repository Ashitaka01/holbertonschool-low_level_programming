#include "main.h"
#include <stddef.h>
/**
 * int_strlen - Write a function that returns the length of a string.
 * @s : pointer to the string
 * Return: void
 */
int _strlen(char *s)
{

	size_t length = 0;

	while (*s++)
		length++;

	return (length);

}
