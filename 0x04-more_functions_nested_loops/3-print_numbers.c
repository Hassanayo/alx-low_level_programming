#include "main.h"
/**
 * print_numbers - print numbers from 0 to 9
 * Return: void
 */
void print_numbers(void)
{
	int num;
	for (num = 0; num <= 9; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
	return (0);
}
