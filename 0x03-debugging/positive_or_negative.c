#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
** positive_or_negative - Entry point
** @i : integer
** Return: Always 0 (Success)
**/
void positive_or_negative(int i)
{
if (i > 0)
{
printf("98 is positive\n");
}
else if (i == 0)
{
printf("0 is zero\n");
}
else
{
printf("-98 is negative\n");
}
}
