#include <stdio.h>
/**
 * main - Entry point
 * prints all single digit numbers of base of 10
 * from 0, followed by a new line
 * Return: Always 0
 */
int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (num = 'a'; num <= 'f'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);

}
