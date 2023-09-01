#include <stdio.h>
#include "main.h"
/**
 ** print_binary - prints the binary equivalent of a decimal number
 ** @var1: Description of parameter 1.
 ** @var2: Description of parameter 2.
 **
 ** Return: Description of the return value.
 **/
void print_binary(unsigned long int n)
{
int i, count = 0;
unsigned long int current;
for (i = 63; i >= 0; i--)
{
current = n >> i;
if (current & 1)
{
_putchar('1');
count++;
}
else if (count)
_putchar('0');
}
if (!count)
_putchar('0');
}
