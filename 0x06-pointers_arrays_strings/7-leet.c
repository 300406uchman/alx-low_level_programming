#include "main.h"

/**
 ** leet - Encodes a string into "1337".
 ** @str: Pointer to the string.
 **
 ** Return: Pointer to the modified string.
 **/
char *leet(char *str)
{
int i, j;
char *letters = "AEOTL";
char *leet_chars = "43071";
for (i = 0; str[i]; i++)
{
for (j = 0; letters[j]; j++)
if (str[i] == letters[j] || str[i] == (letters[j] + 32))
{
str[i] = leet_chars[j];
break;
}
}
return (str);
}

