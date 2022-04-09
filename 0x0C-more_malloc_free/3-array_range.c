#include "main.h"
#include <stdlib.h>
/**
 * array_range - Write a function that create an array of integers.
 * @min: Minimum.
 * @max: Maximum.
 *
 * Return: The pointer to the newly created array
 */
int *array_range(int min, int max)
{
int size;
int i;
int *p;
if (min > max)
return (NULL);
size = max - min + 1;
p = malloc(sizeof(int) * size);
if (p == NULL)
return (NULL);

for (i = 0; i < size; i++)
{
*(p + i) = min;
min++;
}
return (p);

}

