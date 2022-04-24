#include "main.h"
/**
 * leet - encodes a string to 1337
 * @s: string
 * Return: encoded string
 */
char *leet(char *s)
{
	char n[5] = {4, 3, 0, 7, 1};
	char l[5] = {'a', 'e', 'o', 't', 'l'};
	char *str = s;
	int i;

	while (*s)
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == l[i] -32 || *s == l[i])
				*s = n[i] + '0';
		}
		s++;
	}
	return (str);
}
