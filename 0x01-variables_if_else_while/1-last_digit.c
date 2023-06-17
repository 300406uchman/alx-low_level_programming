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
int n, a;
srand(time(0));
n = rand();
n = a % 10;
if (n > 5)
{
printf("Last digit of 98 is 8 and is greater than 5\n");
}
else if (n == 0)
{
printf("Last digit of -98 is -8 and is less than 6 and not 0\n");
}
else
{
printf("Last digit of 980 is 0 and is 0\n");
}
return (0);
}
