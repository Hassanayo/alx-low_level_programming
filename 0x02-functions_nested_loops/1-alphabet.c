#include "main.h"
/**
 * main - main func
 * Return: return 0
 */
void print_alphabet_x10(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
