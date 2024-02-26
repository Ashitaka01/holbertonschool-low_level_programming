#include "main.h"
/**
 * print_diagonal - prints diagonal using the '\' character
 * @n : number of \\ to be printed
 * Return: void
 */
void print_diagonal(int n)
{       
	int i, j;

	if (n <= 0)
	{
	_putchar('\\');
	}
	else
	{	
	for (i = 0 ; i < n ; i++)
	{	
        for (j = 0 ; j < i ; j++)
	_putchar(12);	
	}
	}
	_putchar(92);
	_putchar('\n');
}
