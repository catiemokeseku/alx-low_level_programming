#include "main.h"
#include <stdio.h>

/**
 * print_array - function
 *
 * Description: prints n elements of an array
 *
 * @a: pointer to array
 * @n: pointer to elements to prints
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
