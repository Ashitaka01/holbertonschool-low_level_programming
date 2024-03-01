#include "main.h"
/**
 * rev_string - Write a function that reverses a string
 * @: pointer to a string
 */
void rev_string(char *s)
{

	int i = 0, len = 0;

	while (s[len++] != '\0')
	
	len--;
	 
	while (i < len)

	{
	
		int temp;

		temp = s[i];
		s[i++] = s[len];
		s[len--] = temp;
	
	}

}
