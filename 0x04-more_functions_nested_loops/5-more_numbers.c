#include "main.h"
/**
 * more_numbers - prints 10 times the number from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int c, rpt;

	for (rpt = 0; rpt < 10; rpt++)
	{
		for (c = 0; c < 15; c++)
		{
			if (c >= 10)
				_putchar((c / 10) + 48);
			_putchar((c % 10) + 48);
		}
		_putchar('\n');
	}	
}
