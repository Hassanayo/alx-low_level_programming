#include "main.h"
/**
 * print_alphabet - main func
 * Return: return 0
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
