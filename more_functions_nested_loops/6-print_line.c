#include "main.h"
/**
 * print_line - check for a digit
 * @n : number of _ to be printed
 * Return:void
 */
void print_line(int n)
{
	int d;

	for (d = 0 ; d <= n; d++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
