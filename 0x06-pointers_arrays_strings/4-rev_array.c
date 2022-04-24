#include  "main.h"
/**
 * reverse-array - reverses an array
 * @a: int
 * @n: int
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
