#include "main.h"
/**
 * _puts - Write a function that prints a string
 * @str:
 *
 *
 */
void _puts(char *str)
{

	while (*str)
		_putchar(*str++);

		_putchar('\n');

}
