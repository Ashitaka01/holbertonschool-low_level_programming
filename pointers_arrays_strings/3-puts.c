#include "main.h"
/**
 * _puts - Write a function that prints a string
 * @str:
 *
 *
 */
void _puts(char *str)
{
	int i = 0;

	while (str)
	{
		
		_putchar(str[i]);
		i++;
	
	}
	

		_putchar('\n');

}
