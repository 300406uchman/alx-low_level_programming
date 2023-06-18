#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 *
 */
int main(void)
{
int i,e;
for (i = 0; i < 10; i++)
{
for (e = i + 1; e < 10; e++)
{
putchar(i + '0');
putchar(e + '0');

if (i !=9, e !=10)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
