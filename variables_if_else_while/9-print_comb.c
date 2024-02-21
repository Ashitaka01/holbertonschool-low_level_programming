#include <stdio.h>
/**
 * main - block
 * prints all single digit numbers of base 10
 * starting form 0, followed by a new line
 * Return: 0
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar (' ');
		}
	
		num++;

	}
	putchar('\n');

	return (0);

}
