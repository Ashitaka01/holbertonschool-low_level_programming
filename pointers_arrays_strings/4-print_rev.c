#include "main.h"
/**
 * print_rev - Write a function that prints a string, in reverse
 * @ str: the sring de be print
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');

}
