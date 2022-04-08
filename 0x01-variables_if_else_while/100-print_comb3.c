#include <stdio.h>
/**
 * main - main func
 * Return: return 0
 */
int main(void)
{
	int i = 48;
	int j = 48;

	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			if (i != j && i < j)
			{
				putchar(i);
				putchar(j);

				if (i == 56 && j == 57)
				{
					break;
				}
				putchar(44);
				putchar(32);
			}
			j++;
		}
		i++;
	}
	putchar(10);
	return (0);
}
