#include "main.h"
#include <stdio.h>


/**
 ** print_chessboard - Prints the chessboard
 ** @a: 2D array representing the chessboard
 **
 ** Descript: This function prints the chessboard using the provided 2D array.
 ** Each element of the array represents a square on the chessboard, where 'W'
 ** represents a white square and 'B' represents a black square. The chessboard
 ** is printed with row and column indices for reference.
 **/

void print_chessboard(char (*a)[8])
{
int i, j;
printf("  a b c d e f g h\n");
for (i = 0; i < 8; i++)
{
printf("%d ", i + 1);
for (j = 0; j < 8; j++)
{
printf("%c ", a[i][j]);
}
printf("\n");
}
}

