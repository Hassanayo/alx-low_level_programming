#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: value to concatenate
 * @src: value to concatenate
 * Return: return string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);

}
