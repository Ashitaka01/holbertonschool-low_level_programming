#include "main.h"
/**
 * swap_int - swap variable values
 * @a: pointer a
 * @b: pointer b
 * Return: void
 */
void swap_int(int *a, int *b);
{
	int temp = *a;

	*a = *b;
	*b = temp;

	return 0;
}
