#include "main.h"
#include <string.h>
#include "main.h"
/**
 * _strcpy - compares two strings
 * @s1: First string t be compared
 * @s2: second string to be compared
 * Return: returnsint
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
