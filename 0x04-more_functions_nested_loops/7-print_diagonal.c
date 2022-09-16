#include "main.h"

/**
 * print_diagonal - function
 * Description: draws a diagonal on the terminal
 * @n: number of \ to be printed
 */

void print_diagonal(int n)
{

	int i = 0, a;

	while (i < n && n > 0)
	{
		a = 0;
		
		while (a < i)
		{
			_putchar(' ');
			a++;
		}

		_putchar('\\');
		_putchar('\n');
		i++;
	}
	
	if (i == 0)
		_putchar('\n');

}
