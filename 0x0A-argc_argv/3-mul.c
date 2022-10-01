#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print the result of the multiplication
 *
 * @argc: int
 * @argv: array
 *
 * Return: 0
 */

int main(int argc, char *argv)
{
	if (argc - 1 != 2)
	{
		printf("Error\n");
	}
	else
	{
		printf("%d\n", argv[1] * argv[2]);
	}
	return (0);
}
