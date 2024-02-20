#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Get a random number and check its last digit, compare it with 5
 * Return: 0
 */
 int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last > 5)
		printf("la chaîne et est supérieure à 5\n", n, last);
	else if (last == 0)
		printf("la chaîne et est 0\n", n, last);
	else if (last < 6)
		printf("la chaîne et  est inférieur à 6 et différent de 0\n",n , last);

	return (0);
}
