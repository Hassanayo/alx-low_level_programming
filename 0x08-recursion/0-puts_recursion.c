#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: sreing char
 * Return: a string
 */
void _puts_recursion(char *s)
{
	_puts_recursion(s);
	_putchar('\n');
	return (0);
}