#include "main.h"

/**
 * set_bit - function
 *
 * Description: gets bit on index `index`
 *
 * @n: decimal number
 * @index: index of the bit
 *
 * Return: 1 (success) or -1(faillure)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
  unsigned int m;
  
  if (index >= (sizeof(unsigned long int) * BYTE_LENGHT))
    return (-1);
  
  m = 1 << index;
	*n = (*n | m);

	return (1);
}
