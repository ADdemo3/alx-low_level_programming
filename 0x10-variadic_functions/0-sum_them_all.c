#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of arguments to be summed.
 *
 * Return: sun or 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list arglist;

	if (n == 0)
		return (0);

	va_start(arglist, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arglist, int);
	}
	va_end(arglist);

	return (sum);
}
