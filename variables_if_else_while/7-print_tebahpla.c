#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * prints the lowercase alphabet in reverse,
 * follow by a new line
 * Return: 0
 */
int main(void)
{
	char lt;

	for (lt = 'z'; lt >= 'a')
		putchar(lt);
		lt--;

	putchar('\n');
	return (0);
}
