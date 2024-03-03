#include "main.h"
#include <stdio.h>
/**
 * *_strncpy - function that copies a string
 *
 * @src: The source of strings
 * @dest: The destination of the string
 * @n: The length of int
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
