#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms
 *
 * Return: Always 0. (Success)
 */
int main(void)
{
long int i;
long int first = 1;
long int second = 1;
long int sum = 2;
long int total;
for (i = 1; i < 4000000 ; i++)
{
sum = first + second;
if (sum % 2 == 0)
total += sum;
first = second;
second = sum;
}
printf("%ld\n", total);
return (0);

}
