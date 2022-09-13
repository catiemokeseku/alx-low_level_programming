#include "main.h"

/**
 * main - main block
 *
 * Description:Prints _putchar followed by
 * a new line
 *
 * Return: 0
 *
 */

int main(void)
{
	char p[8] = "_putchar";

	int i = 0;

	while (i < 9)
	{
		_putchar(p[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
