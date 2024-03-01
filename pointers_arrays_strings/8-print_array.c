#include "main.h"
#include <stdio.h>
/**
 * * print_array - prints elements of an array, separated by comma,
 *                 followed by space, and new line at the end
 * @a: pointer to the array
 * @n: number of elements to be printed
 */
void print_array(int *a, int n)
{

	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

	if (index == n - 1)
		continue;

	printf(", ");

	}

	printf("\n");

}
