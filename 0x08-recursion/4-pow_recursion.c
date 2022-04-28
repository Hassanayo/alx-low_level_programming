#include "main.h"
 /**
  * _pow_recursion: pow recursion
  * @x: int
  * @y: int
  * Return: riased to pwer
  */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (x * (_pow_recursion(x, (y - 1))));
}
