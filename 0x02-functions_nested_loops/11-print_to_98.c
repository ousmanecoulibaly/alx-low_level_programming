#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98.
 *@n: Starting number
 * Return: Always 0.
 */
void print_to_98(int n)
{
if (n > 98)
{
while (n >= 98)
{
if (n != 98)
{
printf("%i, ", n);
n--;
}
else
{
printf("%i", n);
printf("\n");
break;
}
}
}
else if (n < 98)
{
while (n <= 98)
{
if (n != 98)
{
printf("%i, ", n);
n++;
}
else
{
printf("%i", n);
printf("\n");
break;
}
}
}
else
{
printf("%i", n);
printf("\n");
}
}
