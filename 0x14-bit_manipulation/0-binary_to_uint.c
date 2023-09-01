#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if there are invalid characters in the string.
 */

unsigned int binary_to_uint(const char *b) {
if (b == NULL)
return (0);

unsigned int result = 0;
int i = 0;

while (b[i] != '\0') {
if (b[i] == '0' || b[i] == '1') {
result = result << 1; 
result += (b[i] - '0'); 
i++;
}
else{
return (0);
}
}
return (result);
}
int main()
{
const char *binary_str = "1010101";
unsigned int result = binary_to_uint(binary_str);
printf("Binary: %s\nUnsigned Int: %u\n", binary_str, result);
return (0);
}
