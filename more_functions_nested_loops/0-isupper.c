#include "main.h"
/*
 * Write a function that checks for uppercase character
 * @c: int that will use for the argument of the function
 * Return: 1 if c is uppercase char, if not Return 0
 */
int _isupper(int c)
{

	if (c <= 'A' && c >= 'Z')
		return (1);
	else
		return (0);

}
