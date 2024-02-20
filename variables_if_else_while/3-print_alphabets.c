#include <stdio.h>
/**
 * main - main block
 * prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char a = 'a';

	while( a <= 'z' )
	{
		putchar(a);
		a++;
	}

	c = 'A';

	while( a <= 'Z' )
	{
		putchar(a);
		a++;
	}

	putchar('\n');
	return (0);
}
