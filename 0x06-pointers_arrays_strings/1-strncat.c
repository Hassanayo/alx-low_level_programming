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
	int i, j, k;
	
	k = strlen(src);

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	if (n < k)
	{
		dest[i] = '\0';
	}
	return (dest);
}
