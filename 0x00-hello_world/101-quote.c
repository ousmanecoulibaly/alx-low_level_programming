#include <stdio.h>
#include <unistd.h>
int _putchar(char c);
/**
 * main - Print a sentence without using printf or puts etc.
 *
 * Return: 1
 */
int main(void)
{
int i;
char array[] = "and that piece of art is useful\" -  Dora Korpar, 2015-10-19";
for (i = 0; array[i] != '\0'; i++)
	_putchar(array[i]);
_putchar('\n');
return (1);

}
/**
 * _putchar - write the character c to stdout
 * @c: The character to print 
 */

int _putchar(char c)
{
return (write(1 , &c , 1));

}
