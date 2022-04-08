#include <stdio.h>
/**
 * main - main func
 * Return: return 0
 */
int main(void)
{
	char ch = 'a';
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar(10);
	for (ch ='A'; ch < 'Z'; ch++)
	{
		putchar(ch);
	}
}
