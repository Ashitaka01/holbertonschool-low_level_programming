#include "main.h"
/**
 * print_rev - Write a function that prints a string, in reverse
 * @str: the sring de be print
 */
void print_rev(char *s)
{
	int len = 0, i;
	
        while (s[i++])
		len++;
	{
	
		for (i = len - 1; i >= 0; i--)
                _putchar(s[i]);
	
	}
	

		_putchar('\n');

}
