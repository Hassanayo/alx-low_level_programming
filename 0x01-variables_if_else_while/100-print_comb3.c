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
			putchar(i);
			putchar(j);

			if (i < 57 || j < 57)
			{
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
