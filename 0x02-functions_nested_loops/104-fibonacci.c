#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0. (Success)
 */
int main(void)
{
unsigned long int fib1, fib2, fib3, num;
fib1 = 1;
fib2 = 2;
fib3 = 3;
printf("%lu, ", fib1);
printf("%lu, ", fib2);
for (num = 3; num < 98; num++)
{
printf("%lu, ", fib3);
fib1 = fib2;
fib2 = fib3;
fib3 = fib1 + fib2;
}
printf("%lu\n", fib3);

return (0);

}
