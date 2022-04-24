#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: first char 
 * @src: second char
 * Return: Returns character dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j = strlen(src);

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	if (n < j)
	{
		dest[i + 1] = '\0';
	}
	return (dest);
}
