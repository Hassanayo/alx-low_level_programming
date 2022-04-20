#include "main.h"
/**
 * swap_int - swap the value of two integers
 * @a: integer
 * @b: integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
