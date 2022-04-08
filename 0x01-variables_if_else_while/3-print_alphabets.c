#include <stdio.h>
/**
 * main - main func
 * Return: return 0 suc
 */
int main(void)
{
	char ch = 'a';
	char sh = 'A';
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (sh = 'A'; sh <= 'Z'; sh++)
	{
		putchar(sh);
	}
	putchar(10);
	return (0);
}
