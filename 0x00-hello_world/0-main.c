#include <stdio.h>

/**
 *
 *main - Entry point
 *
 *Return: 0 (Success)
 *
 */

int main(void)
{
	double x = 5;
	double y = 10;
	double z = x + y;

	if ( x == y) 
	{
		printf("The number is: %lf", z);
	}
	else if ( x != y)
	{
		printf("The number is: %lf", y);
	}
	printf ("\n");
	return (0);
}
