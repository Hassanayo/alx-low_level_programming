#include "main.h"
/**
 * print_line - print a line in the terminal
 * @n: integer
 * Return: void
 */

void print_line(int n)
{
	int line = 0;

	while (line < n)
	{
		_putchar('_');
		line++;
	}
	_putchar('\n');
}
