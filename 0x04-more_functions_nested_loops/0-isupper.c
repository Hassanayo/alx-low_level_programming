#include "main.h"
/**
 * _isupper - checks for uppercase letters
 * @c: a character
 * Return: return 1 if uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
