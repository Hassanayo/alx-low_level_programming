#include "variadic_functions.h"
#include <stdio.h>
#include <stdargs.h>
/**
 * sum_them_all - sum all its parameters
 * @n: integer
 * @...: a variable no of params
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index, sum = 0;

	va_start(nums, n);

	for (index = 0; index < n; index++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
