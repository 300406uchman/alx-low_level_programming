#include "main.h"
#include <stdio.h>

/* 
 * _memset - Fills memory with a constant byte
 * @s: Pointer to the memory area to be filled
 * @b: Constant byte to fill the memory area with
 * @n: Number of bytes to fill
 * Description: This function fills the first n bytes of the memory area pointed
 * to by s with the constant byte b. It returns a pointer to the memory area s.
 * It behaves similarly to the standard library function memset.
 * Return: Pointer to the memory area s
 */
 

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}

