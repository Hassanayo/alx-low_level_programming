#include "main.h"
#include <stdio.h>
/**
 * print_array - print functiom
 * @a: array
 * @n: no to print
 * Return: void
 */
void print_array(int *A, int n)
{
	int i, count;

	i = 0;
	count = 1;
	if (n < 0)
		n = 0;
	if (n > 0)
	{
		while (a[i] != '\0' && count < n)
		{
			printf("%d, ", a[i]);
			i++;
			count++;
		}
		printf("%d\n", a[i]);
	}
}
