#include "main.h"
/*
 * Write a function that checks for uppercase character
 * @c: 
 * Return: 1 if c is uppercase
 * Return: 0
 *
 */
int _isupper(int c)
{

	if (c <= '65' && c >= '95')
		return (1);
	else
		return (0);

}
