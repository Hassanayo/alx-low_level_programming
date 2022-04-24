#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - concatenates new string
 * @dest: first string
 * @src: second string
 * @n: no of char
 * Return: returns character dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	i = strlen(dest);

	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		i++
	}
}
