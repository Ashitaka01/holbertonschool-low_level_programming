#include <stdio.h>
/**
 * main - main block
 * prints all the numbers of base 16 in lowercase,
 * follow by a new line
 * Return 0
 */
int main(void)
{
	int num;

	for (num = 0; num = 15; num++)
	{
		putchar("%x", num);
	}
	printf("\n");
	return (0);

}
