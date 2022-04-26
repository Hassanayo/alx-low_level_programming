#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s: pointer to memory data
 * @b: constant byte
 * @n: no of bytes of memory area
 * Return: returns a char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
