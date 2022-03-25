#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms
 *
 * Return: Always 0. (Success)
 */
int main(void)
{
unsigned long int m, n, o, p;
m = 1;
n = 1;
o = 0;
for (; m <= 4000000;)
{
p = m + n;
m = n;
n = p;
if (m % 2 == 0)
{
o = o + m;
}
}
printf("%lu\n", n);

return (0);

}
