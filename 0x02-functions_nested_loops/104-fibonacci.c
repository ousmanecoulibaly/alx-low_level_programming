#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0. (Success)
 */
int main(void)
{
unsigned long int a, b, c, d;
a = 1;
b = 1;
c = 0;
for (c = 0; c < 98; c++)
{
d = a + b;
a = b;
b = d;
printf("%lu", a);
if (c < 97)
printf(", ");
}
printf("\n");
return (0);

}
