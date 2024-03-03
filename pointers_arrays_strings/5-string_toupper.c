#include "main.h"
#include <stdio.h>
/**
 * *string_toupper - capitalize a string
 * @str: pointer
 * Return: capitalzied string
*/
char *string_toupper(char *)
{
	int index = 0;

	while (char[index])
	{
		if (char[index] >= 'a' && char[index] <= 'z')
			char[index] -= 32;

		index++;
	}

	return (char);
}
