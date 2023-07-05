#include <stdio.h>
#include "main.h"

/**
 ** _sqrt_recursion - Returns the natural square root of a number.
 ** @n: The number to calculate the square root of.
 ** Return: The square root of the number, or -1 no natural square root.
 **/

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (n);
}
else
{
return (sqrt_helper(n, 1, n));
}
}
