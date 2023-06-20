#include "main.h"
#include <stdio.h>

/*
 * main - Entry point
 *
 * Return: 0 Success
 *
 */

void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
}

int main()
{
print_alphabet();
return (0);
}

