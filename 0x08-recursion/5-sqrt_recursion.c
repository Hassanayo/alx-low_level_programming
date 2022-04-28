#include "main.h"
/**
 * _sqrt_recursion - square root
 * @n - int
 * Return: squareroot of the number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (squrt(n, (n + 1)/2));
	}
}
/**
 * squrt - checks if perfect square
 * @n: input
 * @i: counter
 * Return: if square root
 */
int squrt(int n, int i)
{
	if (i < 1)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (squrt(n, i - 1));
}
