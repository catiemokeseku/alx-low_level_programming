#include "main.h"
#include <stdlib.h>

/**
 * array_range - funcction
 *
 * Description: creates an array of integers
 *
 * @min: minimum value
 * @max: maximum value
 *
 * Return: NULL or pointer to array
 */

int *array_range(int min, int max)
{
	int *a, i, n;

	if (min > max)
		return (NULL);

	n = max - min + 1;

	a = malloc(sizeof(int) * size);

	if (a = NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		a[i] = min++;

	return (a);
}
