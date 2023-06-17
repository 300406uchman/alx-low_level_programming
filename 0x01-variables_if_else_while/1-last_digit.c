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
int n, lastdigit;
srand(time(0));
n = rand();
lastdigit = n % 10;
if (lastdigit > 5)
{
printf("6 and is greater than 5 \n");
}
else if (lastdigit == 0)
{
printf("0 and is 0 \n");
}
else
{
printf("3 and is less than 6 and not 0 \n");
}
return (0);
}
