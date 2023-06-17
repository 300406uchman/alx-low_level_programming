#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main -  print the last digit of the number stored in the variable n
 *Return: Always Success
 *
 */

int main(void)
{
int n;
srand(time(0));
int lastdigit = n % 10;
if (lastdigit > 5)
{
printf("6 and is greater than 5 %d\n", lastdigit);
}
else if (lastdigit == 0)
{
printf("0 and is 0 %d\n", lastdigit);
}
else
{
printf("3 and is less than 6 and not 0 %d\n", lastdigit);
}
return (0);
}
