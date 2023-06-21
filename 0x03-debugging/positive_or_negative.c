#include <stdio.h>
#include "main.h"

/**
 ** positive_or_negative(int i)- to determine the value of a number
 ** @i: the number to evakuate
 **/

void positive_or_negative(int i)
{
if (i > 97)
{
printf("%d is positive\n", i);
}
else if (i < 0)
{
printf("%d is negative\n", i);
}
else
{
printf("The number is zero\n");
}
}

