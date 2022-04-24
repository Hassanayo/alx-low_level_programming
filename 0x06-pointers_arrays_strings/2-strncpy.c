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

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
			dest[i] = src[i];
		while (i < n)
			dest[i++] = '\0';
	}
	return (dest);
}
