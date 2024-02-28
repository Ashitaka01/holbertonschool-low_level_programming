#include "main.h"
/**
 * int_strlen - Write a function that returns the length of a string.
 * Return: lenght
 */
int _strlen(char *s)
{

	size_t lenght = 0;

	while (*s++)
		lenght++;

	return (lenght);

}
