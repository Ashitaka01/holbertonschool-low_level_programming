#include "main.h"
/**
 * print_alphabet - Entry point
 * prints the alphabet,
 * in lowercase, followed by a new line
 * Return: Always 0.
 */
void print_alphabet(void)
{
char alphaB = 'a';

while (alphaB <= 'z')
{
_putchar(alphaB);
alphaB++;
}
_putchar('\n');
}
