#include "main.h"
/**
 * _print_rev_recursion - print reverse
 * @s: string
 * Return: reverse
 */
 void _print_rev_recursion(char *s)
{
	 if (*s != '\0')
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
}
