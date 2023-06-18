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
int n = 98; 
int lastdigit;
srand(time(0));
printf("Last digit of %d is ", n);
lastdigit = abs(n % 10);
if (lastdigit > 5)
{
printf("%d and is greater than 5\n", lastdigit);
}
else if ((lastdigit < 6) && (lastdigit < 0))
{
printf("%d and is less than 6 and not 0\n", lastdigit);
}
else
{
printf("%d and is 0\n", lastdigit);
}
return (0);
}
