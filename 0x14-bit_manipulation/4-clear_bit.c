#include "main.h"
/**
 * clear_bit - Ses the value of a bit to an index
 * @n: pointer 
 * @index: position
 * Return: num
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
