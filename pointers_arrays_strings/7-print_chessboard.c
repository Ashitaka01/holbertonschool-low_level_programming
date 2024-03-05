#include "main.h"
#include <stdio.h>
/**
 * print_chessboard- prints the chessboard
 *
 * @a: pointer to pieces to print
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{ 
       	int i, j;
    	char a[8][8] = {
        {'1', '2', '3', '4', '5', '6', '7', '8'},
        {'9', 'a', 'b', 'c', 'd', 'e', 'f', 'g'},
        {'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o'},
        {'p', 'q', 'r', 's', 't', 'u', 'v', 'w'},
        {'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E'},
        {'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'},
        {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U'},
        {'V', 'W', 'X', 'Y', 'Z', '0', '1', '2'}
    };

    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            putchar(a[i][j]);
            putchar(' ');
        }
        putchar('\n');
    }

    return 0;
}
