#include <stdio.h>
/**
 * main - functionname
 * @void: return null
 * Return: return sizes
 */
int main(void)
{
	int i;
	char c;
	float f;
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", (long)sizeof(i));
	printf("Size of a long long int: %d byte(s)\n", (int)sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", (int)sizeof(float));
	return (0);
}
