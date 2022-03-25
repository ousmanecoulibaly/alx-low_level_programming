#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0. (Success)
 */
int main(void)
{
unsigned long int fib1, fib2, fib3, num, count;
count = 0;
fib1 = 1;
fib2 = 2;
num = 98;
printf("%lu, ", fib1);
printf("%lu, ", fib2);
while (count < num)
{
fib3 = fib1 + fib2;
count++;
printf("%lu\n", fib3);
fib1 = fib2;
fib2 = fib3;
}
return (0);

}
