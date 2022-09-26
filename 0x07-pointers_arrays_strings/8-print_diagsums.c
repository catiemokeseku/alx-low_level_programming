#include "main.h"

/** print_diagsums - function
 *
 * Description: prints the sum of the diagonals of a square matrix
 * @a: array
 * @size: size of array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, sum_x = 0, sum_y = 0;

	for (i = 0; i < size; i++)
	{
		sum_x += a[i];
		sum_y += a[size - i - 1];
		a += size;
	}
	printf("%d, ", sum_x);
	printf("%d\n", sum_y);
}
