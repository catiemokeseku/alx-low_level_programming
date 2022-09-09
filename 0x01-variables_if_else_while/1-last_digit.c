#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - main block
 *
 * Description: Get a random number and
 * check if its last digit is greater than 5
 *
 * Return: 0
 */

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;

	if (last_digit > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, last_digit);
	else if (last_digit == 0)
		printf("Last digit of %i is %i and is 0\n", n, last_digit);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n",n,last_digit);
	return (0);
}
