#include "main.h"
/**
 * puts- prints every other charractet of a string
 * @str: char to check
 * Return: 0
 */
void puts2(char *str)
{

	int c = 0;

        while (str[c] != '\0')
        {
		
		
		if (c % 2 == 0)
		{
		
			_putchar(str[c]);
		
		}
	       
        }
		c++;
        _putchar('\n');
}
