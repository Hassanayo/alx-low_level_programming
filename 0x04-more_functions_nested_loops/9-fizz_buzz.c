#include <stdio.h>
/**
 * main - main func
 * Return: fizzBuzz
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			_printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			_printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			_printf("Buzz ");
		}
		else
		{
			_printf("%d ", i);
		}
	}
	_printf("\n");
	return (0);
}