#include "main.h"
/**
 * print_most_numbers - prints numbers
 * 
 *
 *
 */
void print_most_numbers(void)
{

	char c;

	for (c = 0; c <= 9; c++)
	{
	
		if (c == '2' || c == '4')
			
			c++;
		{
			
			_putchar(c);
		
		}


	}
			_putchar('\n');
}
