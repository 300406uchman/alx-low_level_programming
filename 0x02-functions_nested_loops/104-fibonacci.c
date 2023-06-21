#include <stdio.h>

/**
 ** main - fibonacci <3
 **
 ** Purpose - no hardcode
 **
 ** Return: (Success)
 ***/

int main(void)
{
unsigned long int i;
unsigned long int bef[2] = {1, 2};
unsigned long int aft[2];
unsigned long int l = 1000000000;
printf("%lu", bef[0]);
for (i = 1; i < 91; i++)
{
printf(", %lu", bef[1]);
aft[0] = bef[1];
aft[1] = bef[0] + bef[1];
bef[0] = aft[0];
bef[1] = aft[1];
}
for (i = 92; i < 99; i++)
{
printf(", %lu%09lu", bef[1] / l, bef[1] % l);
aft[0] = bef[1] / l + bef[0] / l;
aft[1] = (bef[1] % l) + (bef[0] % l);
bef[0] = aft[0];
bef[1] = aft[1];
}
printf("\n");
return (0);
}
