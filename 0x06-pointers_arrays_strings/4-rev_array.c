#include "main.h"

/**
 * reverse array - function
 *
 * Description: reverses the content of an array
 *
 * @a: pointer to array
 * @n: pointer to number of elements
 *
 * Return: void
 */

void reverse_array(int *a, int *n)
{
	int i, d;

	for (d = n / 2; d > 0; d--, i++)
	{
		a[n - i - 1] += a[i];
		a[i] = a[n - i - 1] - a[i];
		a[n - i - 1] = a[n - i - 1] - a[i];
	}
}
