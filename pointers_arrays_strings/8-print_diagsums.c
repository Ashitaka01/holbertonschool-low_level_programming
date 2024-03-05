#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -  prints sums
 * @a: a pointer
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int i;
	int o = 0;
	int k = 0;

	for (i = 0; i < size; i++)
	{
		o += a[i];
		k += a[size - i - 1];
		a += size;
	}
	printf("%d, ", o);
	printf("%d\n", k);
}
