#include "main.h"

/**
 * print_numbers - function
 *
 * Description: prints numbers from 0 to 9
 *
 * Return: 0
 */

void print_numbers(void)
{
	int i;

	while (i <= 9)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
