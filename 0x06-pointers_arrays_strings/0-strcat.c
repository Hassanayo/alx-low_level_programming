#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: value to concatenate
 * @src: value to concatenate
 * Return: return string
 */
char *_strcat(char *dest, char *src)
{
	int j;
	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);

}
